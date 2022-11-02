#!/bin/sh
killall Xcode
# rm -rf ios/CMakeCache.txt
mkdir ios/
cd ios/
cmake ../ -Dalpine=ON -DCMAKE_TOOLCHAIN_FILE=./toolchains/ios.toolchain.cmake -DPLATFORM=OS64