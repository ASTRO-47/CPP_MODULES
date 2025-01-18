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


struct checker
{
    int int_;
    bool    digit_;
    float   float_;
    double  double_;
    char    char_;
}  ;

void  handle_one_char(checker *my_checker, std::string m);