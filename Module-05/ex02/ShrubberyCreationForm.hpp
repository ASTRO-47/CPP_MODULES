#pragma once

#include "AForm.hpp"
class AForm ;

class ShrubberyCreationForm : public AForm
{
private:
    ShrubberyCreationForm();
    const std::string target;
    // const std::string target;
public:
    ShrubberyCreationForm(const std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);
    ~ShrubberyCreationForm();
} ;
