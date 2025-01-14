#pragma once
#include <fstream>
#include "AForm.hpp"
class AForm ;

class ShrubberyCreationForm : public AForm
{
private:
    const std::string target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);
    ~ShrubberyCreationForm();

    void  execute(Bureaucrat const & executor) const;
} ;
