//
// Created by otronic on 2023/11/14.
//

#ifndef CPP_PRIMER_PLUS_PRACTISE_MESSAGE_H
#define CPP_PRIMER_PLUS_PRACTISE_MESSAGE_H

#endif //CPP_PRIMER_PLUS_PRACTISE_MESSAGE_H
#pragma once

#include <iosfwd>
#include <string>

class Message{
public:
    Message(const std::string &m) :message_(m) {}
    friend std::ostream &operator<<(std::ostream &os,Message &obj){
        return obj.printObject(os);
    }
private:
    std::string message_;
    std::ostream &printObject(std::ostream &os);
};
