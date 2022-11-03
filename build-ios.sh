#!/bin/sh
# echo "Action is $ACTION";
cd ios/
/opt/homebrew/bin/cmake ../ -Dalpine=ON -DCMAKE_TOOLCHAIN_FILE=./toolchains/ios.toolchain.cmake -DPLATFORM=OS64
/opt/homebrew/bin/cmake --build ../ 