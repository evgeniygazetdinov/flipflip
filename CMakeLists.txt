cmake_minimum_required(VERSION 3.14)
project(untitled C)

set(CMAKE_C_STANDARD 11)
set(SOURCE_FILES main.c libs/library.c libs/delim.c)
add_executable(untitled ${SOURCE_FILES})