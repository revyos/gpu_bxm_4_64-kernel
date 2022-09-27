#!/bin/bash

cd $1
make INSTALL_MOD_PATH=$2 modules_install
cd -
