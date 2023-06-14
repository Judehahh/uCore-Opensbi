#!/bin/bash

SBI_BIN=./bootloader/fw_jump.bin
KERNEL_BIN=./build/kernel.bin
IMG_NAME=flash.bin

echo "SBI_BIN=$SBI_BIN"
echo "KERNEL_BIN=$KERNEL_BIN"
echo "IMG_NAME=$IMG_NAME"
echo

rm -rf $IMG_NAME
dd if=$SBI_BIN of=$IMG_NAME
echo
dd if=$KERNEL_BIN of=$IMG_NAME bs=1M seek=2
