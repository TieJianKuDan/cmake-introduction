cmake_minimum_required(VERSION 3.0)
project(library C CXX)

set(INC_DIR inc)
set(SRC_DIR src)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu99")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_BUILD_TYPE Debug)

include_directories(${INC_DIR})
add_compile_options(-Wall)

add_subdirectory(${SRC_DIR} lib)
add_subdirectory(${INC_DIR})