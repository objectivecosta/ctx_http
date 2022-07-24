#!/bin/bash
export NDK=$HOME/Library/Android/sdk/ndk/25.0.8775105/
export HOST_TAG=darwin-x86_64
export MIN_SDK_VERSION=31

export CFLAGS="-Os"
export LDFLAGS="-Wl,-Bsymbolic"

chmod +x ./build-openssl.sh
chmod +x ./build-curl.sh

./build-openssl.sh
./build-curl.sh
