//
// Created by otronic on 2023/11/14.
//
#include <iostream>
#include <cstdlib>
//#include <string>
#include "Message.h"

//std::string say_hello() {
//    return std::string("Hello, CMake world!");
//}
int main() {
    Message say_hello("Hello,CMake World!");
    std::cout << say_hello <<std::endl;

    Message say_goodbye("Goodbye,CMake World");
    std::cout << say_goodbye << std::endl;

    return EXIT_SUCCESS;
}
