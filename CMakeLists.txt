cmake_minimum_required(VERSION 3.25)
project(01_01_main)

set(CMAKE_CXX_STANDARD 14)

add_executable(01_01_main main.cpp lib.h)

add_library(lib1 STATIC lib.cpp)
add_library(lib2 SHARED lib.cpp)

target_link_libraries(01_01_main PRIVATE lib2)

include(CTest)

add_test(NAME check_hello_exit_zero COMMAND 01-1-hello-world)