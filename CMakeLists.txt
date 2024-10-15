cmake_minimum_required(VERSION 3.5.0)
project(leetcode_cpp VERSION 0.1.0 LANGUAGES C CXX)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_COMPILER "/usr/bin/clang++")
set(CMAKE_C_COMPILER "/usr/bin/clang")

# 添加头文件搜索路径
include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(leetcode_cpp main.cpp)

