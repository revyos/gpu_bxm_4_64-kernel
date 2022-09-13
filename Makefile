##
 # Copyright (C) 2020 Alibaba Group Holding Limited
##
include ../.param

CONFIG_BUILD_DRV_EXTRA_PARAM:=""
CONFIG_BUILD_LIB_EXTRA_PARAM:=""
CONFIG_BUILD_TST_EXTRA_PARAM:=""

DIR_TARGET_BASE=bsp/gpu
DIR_TARGET_LIB =bsp/gpu/lib
DIR_TARGET_KO  =bsp/gpu/ko
DIR_TARGET_TEST=bsp/gpu/test

MODULE_NAME=GPU
BUILD_LOG_START="\033[47;30m>>> $(MODULE_NAME) $@ begin\033[0m"
BUILD_LOG_END  ="\033[47;30m<<< $(MODULE_NAME) $@ end\033[0m"


export PATH+=:$(ROOT_DIR)/buildroot/output/host/bin
#export WINDOW_SYSTEM=nulldrmws
#export WINDOW_SYSTEM=xorg
export WINDOW_SYSTEM=lws-generic
#export WINDOW_SYSTEM=wayland
#export WINDOW_SYSTEM=nullws
export MIPS_ELF_ROOT=$(ROOT_DIR)/gpu_bxm_4_64/tools/mips-mti-elf/2014.07-1
export SYSROOT=$(ROOT_DIR)/buildroot/output/host/opt/ext-toolchain/sysroot
export DISCIMAGE=$(ROOT_DIR)/buildroot/output/host/opt/ext-toolchain/sysroot
export KERNELDIR=$(ROOT_DIR)/buildroot/output/build/linux-custom
export BUILD=debug
#export BUILD=release
export LINUX_ROOT=$(ROOT_DIR)/gpu_bxm_4_64
export LLVM_BUILD_DIR=$(ROOT_DIR)/gpu_bxm_4_64/tools/llvm
export RGX_BVNC=36.52.104.182
export DRIVERDIR=rogue_km
export LIBDIR=rogue
#export CC=gcc

#$(warning *****$(origin CC))
#$(warning *****$(PATH))

#
# Do a parallel build with multiple jobs, based on the number of CPUs online
# in this system: 'make -j8' on a 8-CPU system, etc.
#
# (To override it, run 'make JOBS=1' and similar.)
#
ifeq ($(JOBS),)
  JOBS := $(shell grep -c ^processor /proc/cpuinfo 2>/dev/null)
  ifeq ($(JOBS),)
    JOBS := 1
  endif
endif

all:    info driver lib test install_local_output install_rootfs
.PHONY: info driver lib test install_local_output install_rootfs \
        install_addons clean_driver clean_lib clean_test clean_output clean

info:
	@echo $(BUILD_LOG_START)
	@echo "  ====== Build Info from repo project ======"
	@echo "    BUILDROOT_DIR="$(BUILDROOT_DIR)
	@echo "    CROSS_COMPILE="$(CROSS_COMPILE)
	@echo "    LINUX_DIR="$(LINUX_DIR)
	@echo "    ARCH="$(ARCH)
	@echo "    BOARD_NAME="$(BOARD_NAME)
	@echo "    KERNEL_ID="$(KERNELVERSION)
	@echo "    KERNEL_DIR="$(LINUX_DIR)
	@echo "    INSTALL_DIR_ROOTFS="$(INSTALL_DIR_ROOTFS)
	@echo "    INSTALL_DIR_SDK="$(INSTALL_DIR_SDK)
	@echo "  ====== Build configuration by settings ======"
	@echo "    JOBS="$(JOBS)
	@echo $(BUILD_LOG_END)

driver:
	@echo $(BUILD_LOG_START)
	make -C $(DRIVERDIR)/build/linux/thead_linux CROSS_COMPILE=$(CROSS_COMPILE) ARCH=$(ARCH) BUILD=$(BUILD) RGX_BVNC=$(RGX_BVNC)
	@echo $(BUILD_LOG_END)

clean_driver:
	@echo $(BUILD_LOG_START)
	make -C $(DRIVERDIR)/build/linux/thead_linux CROSS_COMPILE=$(CROSS_COMPILE) ARCH=$(ARCH) BUILD=$(BUILD) RGX_BVNC=$(RGX_BVNC) clean
	@echo $(BUILD_LOG_END)

prepare_lib:
	@bash ./tools/prepare.sh $(SYSROOT) $(KERNELDIR) $(DISCIMAGE)

lib: prepare_lib
	@echo $(BUILD_LOG_START)
	make -C $(LIBDIR)/build/linux/thead_linux CROSS_COMPILE=$(TOOLCHAIN_PREFIX) ARCH=$(ARCH) BUILD=$(BUILD) RGX_BVNC=$(RGX_BVNC)
	@echo $(BUILD_LOG_END)

clean_lib:
	@echo $(BUILD_LOG_START)
	make -C $(LIBDIR)/build/linux/thead_linux CROSS_COMPILE=$(TOOLCHAIN_PREFIX) ARCH=$(ARCH) BUILD=$(BUILD) RGX_BVNC=$(RGX_BVNC) clean
	@echo $(BUILD_LOG_END)

test: lib driver
	@echo $(BUILD_LOG_START)
	@echo "Test cases are built when build lib"
	@echo $(BUILD_LOG_END)

clean_test:
	@echo $(BUILD_LOG_START)
	@echo $(BUILD_LOG_END)

install_driver:
	sudo -E make -C $(DRIVERDIR)/build/linux/thead_linux CROSS_COMPILE=$(CROSS_COMPILE) ARCH=$(ARCH) BUILD=$(BUILD) RGX_BVNC=$(RGX_BVNC) kbuild_install

install_lib:
	sudo -E make -C $(LIBDIR)/build/linux/thead_linux CROSS_COMPILE=$(CROSS_COMPILE) ARCH=$(ARCH) BUILD=$(BUILD) RGX_BVNC=$(RGX_BVNC) install

install_prepare:
	mkdir -p ./output/rootfs/$(DIR_TARGET_KO)
	mkdir -p ./output/rootfs/$(DIR_TARGET_LIB)
	mkdir -p ./output/rootfs/$(DIR_TARGET_TEST)

install_addons: install_prepare install_driver install_lib
	@if [ -d addons/$(BOARD_NAME) ]; then                                 \
	    cp -rf addons/$(BOARD_NAME)/* ./output/rootfs/$(DIR_TARGET_BASE); \
	fi

install_local_output: driver lib test install_addons
	@echo $(BUILD_LOG_START)
	find $(DRIVERDIR) -name "*.ko" | xargs -i cp -f {} ./output/rootfs/$(DIR_TARGET_KO)
	chmod +x ./output/rootfs/$(DIR_TARGET_KO)/*.sh
	find $(LIBDIR) -name "*.so*" | xargs -i cp -f {} ./output/rootfs/$(DIR_TARGET_LIB)
	cp -rf $(LIBDIR)/*/target_riscv64/* ./output/rootfs/$(DIR_TARGET_TEST)
	cp -rf $(LIBDIR)/*/target_neutral/*.txt ./output/rootfs/$(DIR_TARGET_TEST)
	cp -rf $(LIBDIR)/*/target_neutral/rgx.* ./output/rootfs/$(DIR_TARGET_TEST)
	cp -rf $(LIBDIR)/*/target_neutral/*pvr* ./output/rootfs/$(DIR_TARGET_TEST)
	rm -rf ./output/rootfs/$(DIR_TARGET_TEST)/*.so*
	rm -rf ./output/rootfs/$(DIR_TARGET_TEST)/*.a*
	rm -rf ./output/rootfs/$(DIR_TARGET_TEST)/*.sh
	@echo $(BUILD_LOG_END)

install_rootfs: install_local_output
	@echo $(BUILD_LOG_START)
#	cp -rf output/rootfs/* $(INSTALL_DIR_ROOTFS)
	@echo $(BUILD_LOG_END)

clean_output:
	@echo $(BUILD_LOG_START)
	rm -rf ./output
	rm -rf $(INSTALL_DIR_ROOTFS)/$(DIR_TARGET_BASE)
	@echo $(BUILD_LOG_END)

clean: clean_output clean_driver clean_lib clean_test

