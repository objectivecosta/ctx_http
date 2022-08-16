
cmake_minimum_required(VERSION 3.10)
project(CTXHTTP)
set(NAME CTXHTTP)

# add_subdirectory(./deps/protobuf)

# # the `pkg_check_modules` function is created with this call
find_package(Protobuf REQUIRED) 
# pkg_check_modules(PROTBUF REQUIRED IMPORTED_TARGET protobuf)
add_library(CTXHTTP-alpine STATIC)
set_property(TARGET CTXHTTP-alpine PROPERTY CXX_STANDARD 14)

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
target_sources(CTXHTTP-alpine PUBLIC
"/Users/rafaelcosta/projekte/ctx_http/src/proto/http_response.pb.h"
"/Users/rafaelcosta/projekte/ctx_http/src/proto/http_request.pb.cc"
"/Users/rafaelcosta/projekte/ctx_http/src/proto/http_request.pb.h"
"/Users/rafaelcosta/projekte/ctx_http/src/proto/http_response.pb.cc"
"/Users/rafaelcosta/projekte/ctx_http/src/common/DataWrapper.cpp"
"/Users/rafaelcosta/projekte/ctx_http/src/common/DataWrapper.hpp"
"/Users/rafaelcosta/projekte/ctx_http/src/common/DataWrapper.hpp"
"/Users/rafaelcosta/projekte/ctx_http/src/http/models/Request.cpp"
"/Users/rafaelcosta/projekte/ctx_http/src/http/client/ClientImpl.cpp"
"/Users/rafaelcosta/projekte/ctx_http/src/http/client/Client.hpp"
"/Users/rafaelcosta/projekte/ctx_http/src/http/client/Client.hpp"
"/Users/rafaelcosta/projekte/ctx_http/src/http/client/iphone/AlpineClientImpl.mm")