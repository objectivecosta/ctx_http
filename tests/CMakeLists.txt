add_executable(Tests ${TEST_ROOT_DIR}/client_tests.cpp)
add_subdirectory(mocks)
set_property(TARGET Tests PROPERTY CXX_STANDARD 14)

find_package(Boost REQUIRED COMPONENTS unit_test_framework)
include_directories(${Boost_INCLUDE_DIR})
target_link_libraries(Tests PUBLIC Boost::unit_test_framework)
target_link_libraries(Tests PUBLIC CTXHTTP)

set(tests ON)

target_link_libraries(Tests PUBLIC
"-framework Cocoa"
"-framework AppKit"
"-framework CoreData"
"-framework Foundation"
)