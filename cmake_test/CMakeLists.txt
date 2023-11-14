cmake_minimum_required(VERSION 3.26)
project(cpp_practise LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(hello-cmake CMake_test1.cpp)
add_library(message STATIC Message.cpp Message.h)
target_link_libraries(hello-cmake message)
