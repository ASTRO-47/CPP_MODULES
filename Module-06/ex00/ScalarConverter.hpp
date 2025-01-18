#pragma once

#include <iostream>
#include <iomanip>
#include <limits>

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
    bool    digit_;
    bool char_check;
    double  int_;
    double   float_;
    double  double_;
    char    char_;
}  ;

void  handle_one_char(checker *my_checker, std::string m);