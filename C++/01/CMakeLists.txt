cmake_minimum_required(VERSION 3.10)
project(lifetime_examples)

set(CMAKE_CXX_STANDARD 17)

include_directories(../common)

add_executable(lt_test01 test01.cpp)
add_executable(lt_test02 test02.cpp)