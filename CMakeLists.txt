cmake_minimum_required(VERSION 3.10)
project(CTXHTTP)
set(NAME CTXHTTP)

set(APP_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(SRC_ROOT_DIR ${APP_ROOT_DIR}/src)
set(TEST_ROOT_DIR ${APP_ROOT_DIR}/tests)

option(alpine "Option to build for alpine devices (iOS, iPadOS, etc...)" OFF)
option(android "Option to build for android devices" OFF)
option(tests "Option to build for testing" OFF)

add_subdirectory(./deps/protobuf EXCLUDE_FROM_ALL)
add_subdirectory(./src)
add_subdirectory(./tests)

# target_include_directories(CTXHTTP PUBLIC ./deps/google/protobuf/src/)

# the `pkg_check_modules` function is created with this call
# pkg_check_modules(PROTBUF REQUIRED IMPORTED_TARGET protobuf)

# set(Protobuf_PREFIX_PATH
#     "/home/xx/soft/protobuf-3.8.0/include"            
#     "/home/xx/soft/protobuf-3.8.0/lib"             
#     "/home/xx/soft/protobuf-3.8.0/bin" )
# add_library(CTXHTTP-alpine STATIC)

# find_package(Protobuf REQUIRED)

if (tests)
message("Building for testing")
endif()