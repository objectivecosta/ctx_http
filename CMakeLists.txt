cmake_minimum_required(VERSION 3.10)
project(CTXHTTP)
set(NAME CTXHTTP)

option(alpine "Option to build for alpine devices (iOS, iPadOS, etc...)" OFF)
option(android "Option to build for android devices" OFF)

add_subdirectory(./deps/google/protobuf EXCLUDE_FROM_ALL)
add_subdirectory(./src)

# target_include_directories(CTXHTTP PUBLIC ./deps/google/protobuf/src/)

# the `pkg_check_modules` function is created with this call
# pkg_check_modules(PROTBUF REQUIRED IMPORTED_TARGET protobuf)

# set(Protobuf_PREFIX_PATH
#     "/home/xx/soft/protobuf-3.8.0/include"            
#     "/home/xx/soft/protobuf-3.8.0/lib"             
#     "/home/xx/soft/protobuf-3.8.0/bin" )
# add_library(CTXHTTP-alpine STATIC)

# find_package(Protobuf REQUIRED)
