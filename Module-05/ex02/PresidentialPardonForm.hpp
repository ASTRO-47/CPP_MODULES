#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"
class AForm ;

class PresidentialPardonForm : public AForm
{
private:
    const std::string target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &other);
    PresidentialPardonForm& operator=(const PresidentialPardonForm &other);

    void execute(const Bureaucrat &excutor) const;
    ~PresidentialPardonForm();
} ;
