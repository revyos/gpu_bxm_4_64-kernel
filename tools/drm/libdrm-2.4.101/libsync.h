/*
 *  sync abstraction
 *  Copyright 2015-2016 Collabora Ltd.
 *
 *  Based on the implementation from the Android Open Source Project,
 *
 *  Copyright 2012 Google, Inc
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a
 *  copy of this software and associated documentation files (the "Software"),
 *  to deal in the Software without restriction, including without limitation
 *  the rights to use, copy, modify, merge, publish, distribute, sublicense,
 *  and/or sell copies of the Software, and to permit persons to whom the
 *  Software is furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 *  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 *  OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 *  ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 *  OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef _LIBSYNC_H
#define _LIBSYNC_H

#include <assert.h>
#include <errno.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/poll.h>
#include <unistd.h>

#if defined(__cplusplus)
extern "C" {
#endif

#ifndef SYNC_IOC_MAGIC
#define SYNC_IOC_MAGIC		'>'
#endif

#ifndef SYNC_IOC_MERGE
/* duplicated from linux/sync_file.h to avoid build-time dependency
 * on new (v4.7) kernel headers.  Once distro's are mostly using
 * something newer than v4.7 drop this and #include <linux/sync_file.h>
 * instead.
 */
struct sync_merge_data {
	char	name[32];
	int32_t	fd2;
	int32_t	fence;
	uint32_t	flags;
	uint32_t	pad;
};
#define SYNC_IOC_MERGE		_IOWR(SYNC_IOC_MAGIC, 3, struct sync_merge_data)
#endif

#ifndef SYNC_IOC_LEGACY_MERGE
/* the legacy definitions are based on the contents of
 * drivers/staging/android/uapi/sync.h in the v4.4 kernel.
 */
struct sync_legacy_merge_data {
	int32_t	fd2;
	char	name[32];
	int32_t	fence;
};

#define SYNC_IOC_LEGACY_MERGE	_IOWR(SYNC_IOC_MAGIC, 1, \
	struct sync_legacy_merge_data)
#endif

#ifndef SYNC_IOC_FILE_INFO
/* duplicated from linux/sync_file.h to avoid a build-time dependency
 * on new (v4.7) kernel headers.
 */
struct sync_fence_info {
	char		obj_name[32];
	char		driver_name[32];
	int32_t		status;
	uint32_t	flags;
	uint64_t	timestamp_ns;
};

struct sync_file_info {
	char		name[32];
	int32_t		status;
	uint32_t	flags;
	uint32_t	num_fences;
	uint32_t	pad;
	uint64_t	sync_fence_info;
};

#define SYNC_IOC_FILE_INFO	_IOWR(SYNC_IOC_MAGIC, 4, struct sync_file_info)
#endif

#ifndef SYNC_IOC_LEGACY_FENCE_INFO
/* the legacy definitions are based on the contents of
 * drivers/staging/android/uapi/sync.h in the v4.4 kernel.
 */
struct sync_pt_info {
	uint32_t	len;
	char		obj_name[32];
	char		driver_name[32];
	int32_t		status;
	uint64_t	timestamp_ns;
	uint8_t		driver_data[0];
};

struct sync_fence_info_data {
	uint32_t	len;
	char		name[32];
	int32_t		status;
	uint8_t		pt_info[0];
};

#define SYNC_IOC_LEGACY_FENCE_INFO	_IOWR(SYNC_IOC_MAGIC, 2, \
	struct sync_fence_info_data)
#endif

static inline int sync_wait(int fd, int timeout)
{
	struct pollfd fds = {0};
	int ret;

	fds.fd = fd;
	fds.events = POLLIN;

	do {
		ret = poll(&fds, 1, timeout);
		if (ret > 0) {
			if (fds.revents & (POLLERR | POLLNVAL)) {
				errno = EINVAL;
				return -1;
			}
			return 0;
		} else if (ret == 0) {
			errno = ETIME;
			return -1;
		}
	} while (ret == -1 && (errno == EINTR || errno == EAGAIN));

	return ret;
}

static inline int sync_legacy_merge(const char *name, int fd1, int fd2)
{
	struct sync_legacy_merge_data data;
	int ret;

	data.fd2 = fd2;
	strncpy(data.name, name, sizeof(data.name));

	do {
		ret = ioctl(fd1, SYNC_IOC_LEGACY_MERGE, &data);
	} while (ret == -1 && (errno == EINTR || errno == EAGAIN));

	if (ret < 0)
		return ret;

	return data.fence;
}

static inline int sync_merge(const char *name, int fd1, int fd2)
{
	struct sync_merge_data data = {0};
	int ret;

	data.fd2 = fd2;
	strncpy(data.name, name, sizeof(data.name));

	do {
		ret = ioctl(fd1, SYNC_IOC_MERGE, &data);
	} while (ret == -1 && (errno == EINTR || errno == EAGAIN));

	if (ret < 0) {
		if (errno == ENOTTY)
			return sync_legacy_merge(name, fd1, fd2);
		else
			return ret;
	}

	return data.fence;
}

/* accumulate fd2 into fd1.  If *fd1 is not a valid fd then dup fd2,
 * otherwise sync_merge() and close the old *fd1.  This can be used
 * to implement the pattern:
 *
 *    init()
 *    {
 *       batch.fence_fd = -1;
 *    }
 *
 *    // does *NOT* take ownership of fd
 *    server_sync(int fd)
 *    {
 *       if (sync_accumulate("foo", &batch.fence_fd, fd)) {
 *          ... error ...
 *       }
 *    }
 */
static inline int sync_accumulate(const char *name, int *fd1, int fd2)
{
	int ret;

	assert(fd2 >= 0);

	if (*fd1 < 0) {
		*fd1 = dup(fd2);
		return 0;
	}

	ret = sync_merge(name, *fd1, fd2);
	if (ret < 0) {
		/* leave *fd1 as it is */
		return ret;
	}

	close(*fd1);
	*fd1 = ret;

	return 0;
}

static inline struct sync_pt_info *sync_pt_info(
					struct sync_fence_info_data *info,
					struct sync_pt_info *pt_info)
{
	if (!pt_info)
		pt_info = (struct sync_pt_info *)info->pt_info;
	else
		pt_info = (struct sync_pt_info *)((uint8_t *)pt_info +
				pt_info->len);

	if ((uint32_t)((uint8_t *)pt_info - (uint8_t *)info) >= info->len)
		return NULL;

	return pt_info;
}

static inline struct sync_fence_info_data *sync_legacy_fence_info(int fd)
{
	const uint32_t len = 4096;
	struct sync_fence_info_data *info = malloc(len);
	int ret;

	if (!info)
		return NULL;

	info->len = len;

	do {
		ret = ioctl(fd, SYNC_IOC_LEGACY_FENCE_INFO, info);
	} while (ret == -1 && (errno == EINTR || errno == EAGAIN));

	if (ret < 0) {
		free(info);
		return NULL;
	}

	return info;
}

static inline struct sync_fence_info_data *fence_info_from_file_info(
					struct sync_file_info *file_info,
					uint32_t num_fences)
{
	struct sync_fence_info_data *info;
	size_t info_len;
	struct sync_pt_info *pt_info = NULL;
	struct sync_fence_info *fence_info;
	uint32_t i;

	info_len = sizeof(*info) + num_fences * sizeof(*pt_info);
	info = malloc(info_len);
	if (!info)
		return NULL;

	info->len = info_len;
	strncpy(info->name, file_info->name, sizeof(info->name));
	info->status = file_info->status;

	fence_info = (struct sync_fence_info *)(uintptr_t)
			file_info->sync_fence_info;
	for (i = 0; i < num_fences; i++) {
		pt_info = sync_pt_info(info, pt_info);
		assert(pt_info);

		pt_info->len = sizeof(*pt_info);
		strncpy(pt_info->obj_name, fence_info->obj_name,
			sizeof(pt_info->obj_name));
		strncpy(pt_info->driver_name, fence_info->driver_name,
			sizeof(pt_info->driver_name));
		pt_info->status = fence_info->status;
		pt_info->timestamp_ns = fence_info->timestamp_ns;

		fence_info++;
	}

	return info;
}

static inline struct sync_fence_info_data *sync_fence_info(int fd)
{
	struct sync_fence_info_data *info = NULL;
	struct sync_file_info initial_info = {""};
	struct sync_file_info *file_info;
	int ret;

	do {
		ret = ioctl(fd, SYNC_IOC_FILE_INFO, &initial_info);
	} while (ret == -1 && (errno == EINTR || errno == EAGAIN));

	if (ret < 0) {
		if (errno == ENOTTY)
			return sync_legacy_fence_info(fd);
		else
			return NULL;
	}

	file_info = calloc(1, sizeof(*file_info) + initial_info.num_fences *
				sizeof(struct sync_fence_info));
	if (!file_info)
		return NULL;

	file_info->num_fences = initial_info.num_fences;
	file_info->sync_fence_info = (uint64_t)(uintptr_t)(file_info + 1);

	do {
		ret = ioctl(fd, SYNC_IOC_FILE_INFO, file_info);
	} while (ret == -1 && (errno == EINTR || errno == EAGAIN));

	if (ret < 0)
		goto free_file_info;

	info = fence_info_from_file_info(file_info, initial_info.num_fences);

free_file_info:
	free(file_info);

	return info;
}

static inline void sync_fence_info_free(struct sync_fence_info_data *info)
{
	free(info);
}

static inline struct sync_fence_info *sync_get_fence_info(
					struct sync_file_info *file_info)
{
	return (struct sync_fence_info *)(uintptr_t)file_info->sync_fence_info;
}

static inline struct sync_file_info *file_info_from_info_data(
					struct sync_fence_info_data *info)
{
	struct sync_pt_info *pt_info = NULL;
	uint32_t num_fences = 0;
	struct sync_file_info *file_info;
	struct sync_fence_info *fence_info;
	uint32_t i;

	while ((pt_info = sync_pt_info(info, pt_info)) != NULL)
		num_fences++;

	file_info = calloc(1, sizeof(*file_info) + num_fences *
				sizeof(*fence_info));
	if (!file_info)
		return NULL;

	strncpy(file_info->name, info->name, sizeof(file_info->name));
	file_info->status = info->status;
	file_info->num_fences = num_fences;
	file_info->sync_fence_info = (uint64_t)(uintptr_t)(file_info + 1);

	fence_info = sync_get_fence_info(file_info);
	for (i = 0; i < num_fences; i++) {
		pt_info = sync_pt_info(info, pt_info);
		assert(pt_info);

		strncpy(fence_info->obj_name, pt_info->obj_name,
			sizeof(fence_info->obj_name));
		strncpy(fence_info->driver_name, pt_info->driver_name,
			sizeof(fence_info->driver_name));
		fence_info->status = pt_info->status;
		fence_info->timestamp_ns = pt_info->timestamp_ns;

		fence_info++;
	}

	return file_info;
}

static inline struct sync_file_info *sync_legacy_file_info(int fd)
{
	const uint32_t len = 4096;
	struct sync_fence_info_data *info = malloc(len);
	struct sync_file_info *file_info;
	int ret;

	if (!info)
		return NULL;

	info->len = len;

	do {
		ret = ioctl(fd, SYNC_IOC_LEGACY_FENCE_INFO, info);
	} while (ret == -1 && (errno == EINTR || errno == EAGAIN));

	if (ret < 0) {
		free(info);
		return NULL;
	}

	file_info = file_info_from_info_data(info);

	free(info);

	return file_info;
}

static inline void sync_file_info_free(struct sync_file_info *file_info)
{
	free(file_info);
}

static inline struct sync_file_info *sync_file_info(int fd)
{
	struct sync_file_info initial_info = {""};
	struct sync_file_info *file_info;
	int ret;

	do {
		ret = ioctl(fd, SYNC_IOC_FILE_INFO, &initial_info);
	} while (ret == -1 && (errno == EINTR || errno == EAGAIN));

	if (ret < 0) {
		if (errno == ENOTTY)
			return sync_legacy_file_info(fd);
		else
			return NULL;
	}

	file_info = calloc(1, sizeof(*file_info) + initial_info.num_fences *
				sizeof(struct sync_fence_info));
	if (!file_info)
		return NULL;

	file_info->num_fences = initial_info.num_fences;
	file_info->sync_fence_info = (uint64_t)(uintptr_t)(file_info + 1);

	do {
		ret = ioctl(fd, SYNC_IOC_FILE_INFO, file_info);
	} while (ret == -1 && (errno == EINTR || errno == EAGAIN));

	if (ret < 0) {
		sync_file_info_free(file_info);
		return NULL;
	}

	return file_info;
}

#if defined(__cplusplus)
}
#endif

#endif
