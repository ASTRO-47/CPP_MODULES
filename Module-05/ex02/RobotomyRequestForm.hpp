#pragma once

#include "AForm.hpp"
class AForm ;

class RobotomyRequestForm : public AForm
{
private:
    RobotomyRequestForm();
    const std::string target;
    // const std::string target;
public:
    RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &other);
    RobotomyRequestForm& operator=(const RobotomyRequestForm &other);
    ~RobotomyRequestForm();
} ;
