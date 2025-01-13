#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm() {}

PresidentialPardonForm::~PresidentialPardonForm() {} // desturctor

PresidentialPardonForm::PresidentialPardonForm(const std::string target_) : AForm("PresidentialPardonForm", 25, 5), target(target_) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other)
{
    *this = other;
} 

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this != &other)
    {
        // target = other.target;
        AForm::operator=(other);
    }
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    if (!get_status())
        throw NotSignedForm();
    if (executor.getGrade() > get_r_excute())
        throw GradeTooLowException();
    std::cout << target << " has been pardoned by Zaphod Beeblebrox.\n";
}
