cmake_minimum_required(VERSION 2.8)

add_custom_command(OUTPUT "include/cliff/c3_0.hpp"
                   PRE_BUILD
                   COMMAND python3 src/generators/cliff/cliff_generator.py 3 --cpp --cpp_header=include/cliff/c3_0.hpp --cpp_type=double --cpp_namespace=cliff --bladescript=scripts/c3_0_blades.py --operationscript=scripts/c_operations.py)

project(testcliff)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
#set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(CMAKE_CXX_FLAGS "-std=c++11 -Wall")

enable_testing()

include_directories("${PROJECT_SOURCE_DIR}/include")

add_executable(testconst ${PROJECT_SOURCE_DIR}/testconst.cpp "include/cliff/c3_0.hpp")

add_subdirectory("test")
