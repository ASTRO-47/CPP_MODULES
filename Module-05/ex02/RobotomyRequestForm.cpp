#include "RobotomyRequestForm.hpp"

// RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target_) : AForm("RobotomyRequestForm", 72, 45), target(target_) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other)
{
    *this = other;
} 

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
    {
        // target = other.target;
        AForm::operator=(other);
    }
    return *this;
}

// need implementation for excute