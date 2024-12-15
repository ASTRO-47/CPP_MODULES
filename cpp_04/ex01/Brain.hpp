#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
private:


public:
    std::string ideas[100];
    Brain();
    // need to handle the shallow and deep copies
    ~Brain();
} ;

#endif