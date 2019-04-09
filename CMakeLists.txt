cmake_minimum_required(VERSION 3.14)
project(Reflecton)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)
add_executable(example examples/example.cpp)
add_executable(test test/test.cpp)