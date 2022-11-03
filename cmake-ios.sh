#!/bin/sh
cd ios/
cmake ../ -Dalpine=ON -DCMAKE_TOOLCHAIN_FILE=./toolchains/ios.toolchain.cmake -DPLATFORM=OS64