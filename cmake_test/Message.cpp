//
// Created by otronic on 2023/11/14.
//
#include "Message.h"

#include <iostream>
#include <string>

std::ostream &Message::printObject(std::ostream &os){
    os <<"This is my very nice message:" << std::endl;
    os << message_;
    return os;

}