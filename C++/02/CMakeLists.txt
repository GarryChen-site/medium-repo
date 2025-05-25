cmake_minimum_required(VERSION 3.10)
project(02)

set(CMAKE_CXX_STANDARD 17)

include_directories(../common)

add_executable(test01 test01_unique_ptr.cpp)
add_executable(test02 test02_shared_ptr.cpp)