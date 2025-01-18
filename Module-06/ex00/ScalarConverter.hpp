#pragma once

#include <iostream>

class ScalarConverter
{
private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter &other) ;
    ScalarConverter & operator=(const ScalarConverter &other);
public:
    ~ScalarConverter();
    static void convert(const std::string);
} ;


typedef struct checker
{
    bool    invalid_;
    float   float_;
    double  double_;
    char    char_;
} checker ;
