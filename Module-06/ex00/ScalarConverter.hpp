#pragma once

#include <iostream>
#include <limits>
#include <iomanip> // setprecision
#include <cmath>
#include "my_checker.hpp"

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
