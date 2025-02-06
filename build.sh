#!/bin/bash
set -e

# Path variables
DIR=$(readlink -f .)
MAIN=$(readlink -f ${DIR}/..)

# Resources
export CLANG_PATH=$MAIN/clang-tc/bin/
export PATH=${CLANG_PATH}:${PATH}
export CLANG_TRIPLE="aarch64-linux-gnu-"
export CROSS_COMPILE="aarch64-linux-gnu-"

# Config
THREAD="-j$(nproc --all)"
DEFCONFIG="gki_defconfig"
export ARCH=arm64
export SUBARCH=$ARCH
export KBUILD_BUILD_USER=bachnxuan
export USE_CCACHE=1
LLVM_CONFIG="LLVM=1 LLVM_IAS=1 AR=llvm-ar NM=llvm-nm OBJCOPY=llvm-objcopy OBJDUMP=llvm-objdump STRIP=llvm-strip"
DATE_START=$(date +"%s")

make $THREAD CC="ccache clang" CXX="ccache clang++" $LLVM_CONFIG $DEFCONFIG O=out
make $THREAD CC="ccache clang" CXX="ccache clang++" $LLVM_CONFIG \
    CONFIG_LOCALVERSION_AUTO=n LOCALVERSION=-android12-$(date +%Y%m%d) \
    LTO=thin O=out 2>&1 | tee kernel.log

DATE_END=$(date +"%s")
DIFF=$(($DATE_END - $DATE_START))
echo "Time: $(($DIFF / 60)) minute(s) and $(($DIFF % 60)) seconds."
