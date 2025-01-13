#include "ShrubberyCreationForm.hpp"

// ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target_) : AForm("ShrubberyCreationForm", 145, 137), target(target_) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other)
{
    *this = other;
} 

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
    {
        // target = other.target;
        AForm::operator=(other);
    }
    return *this;
}

// need implementation for excute
