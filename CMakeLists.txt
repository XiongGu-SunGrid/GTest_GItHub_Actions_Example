cmake_minimum_required(VERSION 3.13)  # Specify the minimum required CMake version
project(GTest_GItHub_Actions_Example)  # Replace with your project's name

# Set C++ standard as C++ 17
set(CMAKE_CXX_STANDARD 17)

include_directories(src)
include_directories(lib/googletest)

add_subdirectory(src)
add_subdirectory(tst)
add_subdirectory(lib/googletest)