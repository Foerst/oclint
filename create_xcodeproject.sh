#!/bin/sh -e
if [ -d ./oclint-project ];then
    rm -rf ./oclint-project
fi

mkdir oclint-project && cd oclint-project
cmake -G Xcode \
-D CMAKE_CXX_COMPILER=../build/llvm-install/bin/clang++  \
-D CMAKE_C_COMPILER=../build/llvm-install/bin/clang \
-D OCLINT_BUILD_DIR=../build/oclint-core \
-D OCLINT_SOURCE_DIR=../oclint-core \
-D OCLINT_METRICS_SOURCE_DIR=../oclint-metrics \
-D OCLINT_METRICS_BUILD_DIR=../build/oclint-metrics \
-D LLVM_ROOT=../build/llvm-install/ ../oclint-rules


