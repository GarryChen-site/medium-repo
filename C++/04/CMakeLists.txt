cmake_minimum_required(VERSION 3.10)
project(container_examples)

set(CMAKE_CXX_STANDARD 17)

include_directories(../common)

add_executable(clang_test01 test01_output_container.cpp)
add_executable(clang_test02 test02_vector.cpp)
add_executable(clang_test03 test03_list.cpp)
add_executable(clang_test04 test04_queue.cpp)
add_executable(clang_test05 test05_stack.cpp)