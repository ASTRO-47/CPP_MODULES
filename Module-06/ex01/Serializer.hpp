#pragma once

#include <iostream>
#include <iomanip>
#include <limits>

class Serializer
{
private:
    Serializer();
    Serializer(const Serializer &other) ;
    Serializer & operator=(const Serializer &other);
public:
    ~Serializer();
    static void convert(const std::string);
} ;


struct checker
{
    bool    digit_;
    bool char_check;
    double  int_;
    double   float_;
    double  double_;
    char    char_;
}  ;
