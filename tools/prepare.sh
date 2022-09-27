#!/bin/bash

#if [ ! -d $1/usr/local ]; then
#    echo "Install libdrm in the $SYSROOT"
#    cd tools/drm/libdrm-2.4.101/riscv64-unknown-linux-gnu-binaries/
#    DESTDIR="$SYSROOT" sudo -E ninja install
##    sudo -E make -C libdrm-2.4.99/riscv64-unknown-linux-gnu-binaries  DESTDIR="$SYSROOT" install
#    sudo cp $1/usr/local/lib/riscv64-unknown-linux-gnu $1/usr/local/lib/riscv64-linux-gnu -rf
#    cd -
#    cd $2
#    make INSTALL_MOD_PATH=$3 modules_install
#    cd -
#fi

if [ ! -d tools/mips-mti-elf ]; then
    echo "unzip the MIPS TOOLCHAIN"
    cd tools/
    tar -xvf mips-mti-elf.tar
    cd -
fi
