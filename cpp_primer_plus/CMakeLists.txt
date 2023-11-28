# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.

cmake_minimum_required(VERSION 3.26)
project(cpp_practise)

set(CMAKE_CXX_STANDARD 11)


## Add tasks subprojects
#include(cmake/utils.cmake)
#add_subprojects(${CMAKE_SOURCE_DIR})

#add_subdirectory(ch03)
#add_subdirectory(ch04)
#add_subdirectory(ch05)
#add_subdirectory(ch06)25
#add_subdirectory(ch07)
#add_subdirectory(ch08)
#add_subdirectory(ch09)
#add_subdirectory(ch10)
#add_subdirectory(ch11)

add_executable(ch03_ex01 ch03/ch03_ex01.cpp)
add_executable(ch03_case01 ch03/ch03_case01.cpp)
add_executable(ch03_ex02 ch03/ch03_ex02.cpp)
add_executable(ch03_ex03 ch03/ch03_ex03.cpp)
add_executable(ch03_ex04 ch03/ch03_ex04.cpp)
add_executable(ch03_ex05 ch03/ch03_ex05.cpp)
add_executable(ch03_ex06 ch03/ch03_ex06.cpp)
add_executable(ch03_ex07 ch03/ch03_ex07.cpp)