cmake_minimum_required(VERSION 3.21 FATAL_ERROR)

project(workflow_test LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_CXX_EXTENSION OFF)

add_executable(main main.cpp)