#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm() {}

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

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    // check the grade
    if (executor.getGrade() > get_r_excute())
        throw GradeTooLowException();
    if (!get_status())
        throw NotSignedForm();
    static int i;
    if (i % 2 == 0 )
    {
        std::cout << "vrrrrrrrr ";
        std::cout << target << " has been successfully robotomized\n";
    }
    else
        std::cout << target << " failed to robotomized\n";
}