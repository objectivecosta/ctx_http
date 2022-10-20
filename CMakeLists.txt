cmake_minimum_required(VERSION 3.10)
project(CTXHTTP)
set(NAME CTXHTTP)

add_subdirectory(./deps/google/protobuf)
add_subdirectory(./src)

# the `pkg_check_modules` function is created with this call
# pkg_check_modules(PROTBUF REQUIRED IMPORTED_TARGET protobuf)


# set(Protobuf_PREFIX_PATH
#     "/home/xx/soft/protobuf-3.8.0/include"            
#     "/home/xx/soft/protobuf-3.8.0/lib"             
#     "/home/xx/soft/protobuf-3.8.0/bin" )

# target_include_directories(CTXHTTP PRIVATE ${./deps/protobuf/src/google/protobuf})
# add_library(CTXHTTP-alpine STATIC)

# find_package(Protobuf REQUIRED)
