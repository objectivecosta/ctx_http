#!/usr/bin/python3
import sys
import os
import list_files
import shutil

def current_path():
    return os.path.dirname(os.path.realpath(__file__))

alpine_archs = [
    "combined"
]

cmake_header = """
cmake_minimum_required(VERSION 3.10)
project(CTXHTTP)
set(NAME CTXHTTP)
"""

def cmake_sh():
    return "cmake ./ -G Xcode -DCMAKE_TOOLCHAIN_FILE=../../../ios.toolchain.cmake -DPLATFORM=OS64COMBINED"

def build_script():
    return "make;"

def cmake_file():
    cmake_file_txt = cmake_header
    cmake_file_txt += alpine_targets()
    cmake_file_txt += alpine_options()
    cmake_file_txt += alpine_sources()
    return cmake_file_txt

def alpine_targets():
    targets = "add_library(CTXHTTP-alpine STATIC)\n"
    targets += "set_property(TARGET CTXHTTP-alpine PROPERTY CXX_STANDARD 14)"
    return targets

def alpine_options():
    return """
target_link_libraries(CTXHTTP-alpine
"-framework Cocoa"
"-framework AppKit"
"-framework CoreData"
"-framework Foundation"
)
target_compile_options(CTXHTTP-alpine PUBLIC -x objective-c++)
target_compile_definitions(CTXHTTP-alpine PUBLIC IS_ALPINE)
    """

def alpine_sources():
    sources = "target_sources(CTXHTTP-alpine PUBLIC"
    for file in list_files.list_files():
        if "jni" not in file:
            sources = sources + "\n"
            sources = sources + "\"{}\"".format(file)
    sources = sources + ")"
    return sources

for alpine_toolchain in alpine_archs:
    shutil.rmtree("./build/alpine/{}".format(alpine_toolchain), ignore_errors=True)
    os.makedirs("./build/alpine/{}".format(alpine_toolchain))
    f = open("./build/alpine/{}/CMakeLists.txt".format(alpine_toolchain), "a")
    f.write(cmake_file())
    f.close()

    c = open("./build/alpine/{}/cmake.sh".format(alpine_toolchain), "a")
    c.write(cmake_sh())
    c.close()

    b = open("./build/alpine/{}/build.sh".format(alpine_toolchain), "a")
    b.write(build_script())
    b.close()


