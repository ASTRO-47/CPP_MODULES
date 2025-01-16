#include "ScalarConverter.hpp"

// for the canonical form

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &other) 
{
    (void) other;
}


ScalarConverter & ScalarConverter::operator=(const ScalarConverter &other) { 
    (void) other;
    return *this;
}

ScalarConverter::~ScalarConverter() {}


void handle_int(std::string m)
{
    if (m.length() > 12)
    {
        std::cout << "Impossible\n";
        return ;
    }
    long y = std::atol(m.c_str());
    if (y > 2147483647 || y < -2147483648)
    {
        std::cout << "Impossible\n";
        return ;
    }
    if (y == -1 && m != "-1")
    {
        std::cout << "Impossible\n";
    }
    else
        std::cout << y << std::endl;
}


void handle_char(std::string m)
{
    if (m.length() > 3 || )
    {
        std::cout << "Impossible\n";
        return ;
    }
}

void ScalarConverter::convert(const std::string m)
{
    std::cout << "Int: ";
    handle_int((m));
    std::cout << "Char: ";
    handle_char(m);
}

// ana = not a number