#!/bin/bash

export ARCH=arm
export CROSS_COMPILE=/home/francesco/arm-eabi-4.9/bin/arm-eabi-
mkdir output

make -C $(pwd) O=output 0crazykernel1_CM_defconfig VARIANT_DEFCONFIG=msm8974pro_sec_klte_eur_defconfig SELINUX_DEFCONFIG=selinux_defconfig
make -C $(pwd) O=output

cp output/arch/arm/boot/Image $(pwd)/arch/arm/boot/zImage
