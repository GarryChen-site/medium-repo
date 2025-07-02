cmake_minimum_required(VERSION 3.10)
project(container_examples)

set(CMAKE_CXX_STANDARD 17)

include_directories(../common)

add_executable(clang_test06 test06_hash.cpp)
add_executable(clang_test07 test07_priority_queue.cpp)
add_executable(clang_test08 test08_ordered.cpp)
add_executable(clang_test09 test09_unordered.cpp)
add_executable(clang_test10 test10_array.cpp)