cmake_minimum_required(VERSION 3.10)
project(03)

set(CMAKE_CXX_STANDARD 17)

include_directories(../common)

add_executable(clang_test01 test01_lifetime.cpp)
add_executable(clang_test02 test02_lifetime_extension.cpp)
add_executable(clang_test03 test03_nrvo.cpp)
add_executable(clang_test04 test04_forward.cpp)