#include "ScalarConverter.hpp"

#include <strstream>
#include <sstream>
void  handle_one_char(checker *my_checker, std::string m)
{
    std::istringstream input_string(m);

    // if (std::isdigit(m[0]))
    //     my_checker->digit_;
    input_string >> my_checker->float_;
    if (std::isdigit(m[0]))
    {
        std::cout << "Float: " <<  my_checker->float_ << std::endl;
    }
    // input_string.clear();
    // input_string >> my_checker->int_;
    // if (std::isdigit(m[0]))
    // {
    //     std::cout << "Int: " <<  my_checker->int_  << std::endl;
    // }
    // std::cout << "Char: Non displayable" << std::endl; 
}



