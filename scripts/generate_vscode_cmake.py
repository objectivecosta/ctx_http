#!/usr/bin/python3
import sys
import os
import list_files
import shutil

def current_path():
    return os.path.dirname(os.path.realpath(__file__))

cmake_header = """
cmake_minimum_required(VERSION 3.10)
project(CTXHTTP)
set(NAME CTXHTTP)

add_subdirectory(./deps/protobuf)

# # the `pkg_check_modules` function is created with this call
find_package(Protobuf REQUIRED) 
# pkg_check_modules(PROTBUF REQUIRED IMPORTED_TARGET protobuf)
"""

def cmake_sh():
    return "cmake ./ -G Xcode -DCMAKE_TOOLCHAIN_FILE=../../../toolchains/ios.toolchain.cmake -DPLATFORM=OS64COMBINED"

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
protobuf
)
target_compile_options(CTXHTTP-alpine PUBLIC -x objective-c++)
target_compile_definitions(CTXHTTP-alpine PUBLIC IS_ALPINE)
target_include_directories(CTXHTTP-alpine PUBLIC ${Protobuf_INCLUDE_DIRS})
"""

def alpine_sources():
    sources = "target_sources(CTXHTTP-alpine PUBLIC"
    for file in list_files.list_files():
        if "jni" not in file:
            sources = sources + "\n"
            sources = sources + "\"{}\"".format(file)
    sources = sources + ")"
    return sources

f = open("./CMakeLists.txt", "w")
f.write(cmake_file())
f.close()

