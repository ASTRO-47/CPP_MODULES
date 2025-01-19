#pragma once

#include <iostream>
#include <iomanip>
#include <limits>


struct Data
{
    std::string name;
}  ;



class Serializer
{
private:
    Serializer();
    Serializer(const Serializer &other) ;
    Serializer & operator=(const Serializer &other);
public:
    ~Serializer();
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
} ;


