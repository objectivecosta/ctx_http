
add_library(CTXHTTP STATIC)

add_dependencies(CTXHTTP libprotobuf)

target_compile_options(CTXHTTP PUBLIC -x objective-c++)
target_compile_definitions(CTXHTTP PUBLIC IS_ALPINE)

# target_include_directories(CTXHTTP PUBLIC ${Protobuf_INCLUDE_DIR})
# message(PROTOBUF INCLUDE: ${Protobuf_INCLUDE_DIR})
set_property(TARGET CTXHTTP PROPERTY CXX_STANDARD 14)

if(alpine)
target_link_libraries(CTXHTTP PUBLIC
"-framework Cocoa"
"-framework AppKit"
"-framework CoreData"
"-framework Foundation"
)
endif()

# find_package(libprotobuf REQUIRED NO_DEFAULT_PATH CONFIGS libprotobuf.cmake HINTS ../deps/google/protobuf/cmake)

# find_library(Protobuf_PATH libprotobuf NO_DEFAULT_PATH)
# # link_directories(${CMAKE_BINARY_DIR}/deps/google/protobuf/)
# message(Found_proto_at: ${CMAKE_BINARY_DIR})
# # add_library(libprotobuf)

# message(STATUS "proto_path: ${Protobuf_PATH}")
target_link_libraries(CTXHTTP PUBLIC libprotobuf)


target_sources(CTXHTTP PUBLIC
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
"/Users/rafaelcosta/projekte/ctx_http/src/http/client/Client.hpp")

if(alpine)
target_sources(CTXHTTP PUBLIC
"/Users/rafaelcosta/projekte/ctx_http/src/http/client/iphone/AlpineClientImpl.mm")
endif()