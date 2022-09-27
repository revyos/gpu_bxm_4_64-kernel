##
 # Copyright (C) 2020 Alibaba Group Holding Limited
##
include .param

CONFIG_BUILD_DRV_EXTRA_PARAM:=""
CONFIG_BUILD_LIB_EXTRA_PARAM:=""
CONFIG_BUILD_TST_EXTRA_PARAM:=""

DIR_TARGET_BASE=bsp/gpu
DIR_TARGET_LIB =bsp/gpu/lib
DIR_TARGET_KO  =bsp/gpu/ko
DIR_TARGET_TEST=bsp/gpu/test

export RGX_BVNC=36.52.104.182
export DRIVERDIR=rogue_km
export LIBDIR=rogue
export DISCIMAGE=$(shell pwd)/output

ifeq ($(JOBS),)
  JOBS := $(shell grep -c ^processor /proc/cpuinfo 2>/dev/null)
  ifeq ($(JOBS),)
    JOBS := 1
  endif
endif

export CROSS_COMPILE=riscv64-unknown-linux-gnu-
export BUILD=release

#all:    info driver test install_local_output install_rootfs
#.PHONY: info driver test install_local_output install_rootfs \
#        install_addons clean_driver clean_test clean_output clean
all:    info driver test install_local_output
.PHONY: info driver test install_local_output \
        install_addons clean_driver clean_test clean_output clean

info:
	@echo "  ====== Build Info from repo project ======"
	@echo "    BUILDROOT_DIR="$(BUILDROOT_DIR)
	@echo "    CROSS_COMPILE="$(CROSS_COMPILE)
	#@echo "    LINUX_DIR="$(LINUX_DIR)
	@echo "    ARCH="$(ARCH)
	@echo "    BOARD_NAME="$(BOARD_NAME)
	@echo "    KERNEL_ID="$(KERNELVERSION)
	#@echo "    KERNEL_DIR="$(LINUX_DIR)
	@echo "    INSTALL_DIR_ROOTFS="$(INSTALL_DIR_ROOTFS)
	@echo "    INSTALL_DIR_SDK="$(INSTALL_DIR_SDK)
	@echo "    ROOT_DIR="$(ROOT_DIR)
	@echo "  ====== Build configuration by settings ======"
	@echo "    JOBS="$(JOBS)

driver:
	make -j 64 -C $(DRIVERDIR)/build/linux/thead_linux CROSS_COMPILE=$(CROSS_COMPILE) ARCH=$(ARCH) BUILD=$(BUILD) RGX_BVNC=$(RGX_BVNC)

clean_driver:
	make -C $(DRIVERDIR)/build/linux/thead_linux CROSS_COMPILE=$(CROSS_COMPILE) ARCH=$(ARCH) BUILD=$(BUILD) RGX_BVNC=$(RGX_BVNC) clean

prepare_driver:
	@echo " prepare_driver "
	@bash ./tools/prepare_driver.sh $(KERNELDIR) $(DISCIMAGE)


test: driver

clean_test:

install_driver: prepare_driver
	make -C $(DRIVERDIR)/build/linux/thead_linux CROSS_COMPILE=$(CROSS_COMPILE) ARCH=$(ARCH) BUILD=$(BUILD) RGX_BVNC=$(RGX_BVNC) kbuild_install

install_prepare:
	mkdir -p ./output/rootfs/$(DIR_TARGET_KO)
	mkdir -p ./output/rootfs/$(DIR_TARGET_LIB)
	mkdir -p ./output/rootfs/$(DIR_TARGET_TEST)
	mkdir -p ./output/usr/bin
	mkdir -p ./output/usr/lib
	mkdir -p ./output/usr/share/gpu
	mkdir -p ./output/lib/systemd/system
	mkdir -p ./output/lib/systemd/system-preset
	mkdir -p ./output/usr/share/gpu
	mkdir -p ./output/lib/firmware

install_addons: install_prepare install_driver
	@if [ -d addons/ko ]; then                                 \
	    cp -rf addons/ko/*.sh ./output/usr/share/gpu; \
	    cp -rf addons/ko/98-pvrsrvkm.preset ./output/lib/systemd/system-preset; \
	    cp -rf addons/ko/pvrsrvkm.service ./output/lib/systemd/system; \
	fi
	@if [ -d addons/lib ]; then                                 \
	    cp -rf addons/lib/etc ./output/; \
	    cp -rf addons/lib/lib/firmware/* ./output/lib/firmware/; \
	    cp -rf addons/lib/usr/lib ./output/usr/; \
	    cp -rf addons/lib/usr/local ./output/usr/; \
	fi
install_local_output: driver test install_addons
	chmod +x ./output/usr/share/gpu/*.sh
	rm -rf ./output/etc/powervr_ddk_install_km.log
	rm -rf ./output/rootfs/$(DIR_TARGET_TEST)/*.so*
	rm -rf ./output/rootfs/$(DIR_TARGET_TEST)/*.a*
	rm -rf ./output/rootfs/$(DIR_TARGET_TEST)/*.sh
	# cleanup unnecessary files
	rm -rf ./output/rootfs
	rm -rf ./output/lib/modules/*/kernel
	rm -rf ./output/lib/modules/*/modules*
	rm -rf ./output/lib/modules/*/build
	rm -rf ./output/lib/modules/*/source

clean_output:
	rm -rf ./output
	rm -rf $(INSTALL_DIR_ROOTFS)/$(DIR_TARGET_BASE)

clean: clean_output clean_driver clean_test
