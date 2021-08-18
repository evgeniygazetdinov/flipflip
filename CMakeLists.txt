cmake_minimum_required(VERSION 3.14)
project(untitled C)

set(CMAKE_C_STANDARD 11)
set(SOURCE_FILES main.c library.c delim.c)
#add_library(untitled library.c library.h)
add_executable(untitled ${SOURCE_FILES})