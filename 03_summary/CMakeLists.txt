cmake_minimum_required(VERSION 3.0)
project(summary C CXX)

set(SRC_DIR src)
set(INC_DIR inc)
set(LIB_INC_DIR "C:/Program Files (x86)/library/include")
set(LIB_DIR "C:/Program Files (x86)/library/lib")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu99")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_BUILD_TYPE Debug)

include_directories(${INC_DIR} ${LIB_INC_DIR})
link_directories(${LIB_DIR})

add_compile_options(-Wall)
add_subdirectory(${SRC_DIR} bin)