# Set the minimum version of CMake that can be used
cmake_minimum_required(VERSION 3.10)
# Set the minimum C standard to C99
set(CMAKE_C_STANDARD 99)
# Build main.c file as a project named lesson
add_executable(lesson main.c)
