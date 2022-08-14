#!/usr/bin/python3
import sys
import os
import list_files
import shutil

def current_path():
    return os.path.dirname(os.path.realpath(__file__))

def java_include():
    java_home = os.getenv("JAVA_HOME", default=None)
    return "{}/include/".format(java_home)

android_archs = [
    "arm64-v8a",
    "armeabi-v7a",
    "x86",
    "x86_64"
]

min_sdk_version = 28

def cmake_sh():
    return """
export NDK=$HOME/Library/Android/sdk/ndk/25.0.8775105/
export HOST_TAG=darwin-x86_64
export MIN_SDK_VERSION=31
cmake -DCMAKE_TOOLCHAIN_FILE=$NDK/build/cmake/android.toolchain.cmake -DANDROID_ABI=$ABI -DANDROID_PLATFORM=android-$MIN_SDK_VERSION -DANDROID_NATIVE_API_LEVEL=$MIN_SDK_VERSION $OTHER_ARGS    
"""
# export NDK=$HOME/Library/Android/sdk/ndk/25.0.8775105/
# export HOST_TAG=darwin-x86_64
# export MIN_SDK_VERSION=31
# cmake -DCMAKE_TOOLCHAIN_FILE=$NDK/build/cmake/android.toolchain.cmake -DANDROID_ABI=$ABI -DANDROID_PLATFORM=android-$MINSDKVERSION $OTHER_ARGS    
# """

def build_script():
    return "make;"

cmake_header = """
cmake_minimum_required(VERSION 3.10)
project(CTXHTTP)
set(NAME CTXHTTP)
"""

def cmake_file(arch):
    cmake_file_txt = cmake_header
    cmake_file_txt += android_targets()
    cmake_file_txt += android_options(arch)
    cmake_file_txt += android_sources()
    return cmake_file_txt

def android_targets():
    targets = "add_library(CTXHTTP-android SHARED)" + "\n"
    targets = targets + "set_property(TARGET CTXHTTP-android PROPERTY CXX_STANDARD 14)" + "\n"
    return targets

def android_options(arch):
    text = "target_compile_definitions(CTXHTTP-android PUBLIC IS_ANDROID)\n"
    text += "# target_include_directories(CTXHTTP-android PUBLIC {})\n".format(java_include())
    text += "target_include_directories(CTXHTTP-android PUBLIC {}/deps/libcurl/build/curl/{}/include)\n".format(current_path(), arch)
    text += "target_link_libraries(CTXHTTP-android PUBLIC {}/deps/libcurl/build/curl/{}/lib/libcurl.a)\n".format(current_path(), arch)
    text += "target_include_directories(CTXHTTP-alpine PUBLIC \"${Protobuf_INCLUDE_DIRS}\")"
    return text

def android_sources():
    sources = "target_sources(CTXHTTP-android PUBLIC"
    for file in list_files.list_files():
        if ".mm" not in file:
            sources = sources + "\n"
            sources = sources + "\"{}\"".format(file)
    sources = sources + ")"
    return sources

for arch in android_archs:
    perm = '777'

    shutil.rmtree("./generated/android/{}".format(arch), ignore_errors=True)
    os.makedirs("./generated/android/{}".format(arch))
    f = open("./generated/android/{}/CMakeLists.txt".format(arch), "a")
    f.write(cmake_file(arch))
    f.close()

    c = open("./generated/android/{}/cmake.sh".format(arch), "a")
    c.write(cmake_sh())
    c.close()
    os.chmod("./generated/android/{}/cmake.sh".format(arch), int(perm, base=8))

    b = open("./generated/android/{}/build.sh".format(arch), "a")
    b.write(build_script())
    b.close()
    os.chmod("./generated/android/{}/build.sh".format(arch), int(perm, base=8))