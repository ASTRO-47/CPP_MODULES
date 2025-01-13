#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "an intern has been created\n";
}

Intern::Intern(const Intern &other)
{
    *this = other;
    // nothing to copy
}
Intern& Intern::operator=(const Intern &other)
{
    // 
    (void) other;
    return *this;
}

Intern::~Intern()
{
    std::cout << "oh no the intern quicked\n";
}

AForm *createShrubury(const std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm *createPardon(const std::string target)
{
    return new PresidentialPardonForm(target);
}

AForm *createrobotomized(const std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm *Intern::makeForm(const std::string form_name, const std::string target)
{
    AForm *(*ptr[])(const std::string)  = {createShrubury, createPardon, createrobotomized};
    std::string order[] = {"shruberry request", "presidential pardon" ,"robotomy request"};
    int i = 0;
    while (i < 3)
    {
        if (form_name == order[i])
            break ;
        i++;
    }
    if (i < 3)
        return (ptr[i](target));
    std::cout << "i can not create  this type form\n" << "i can just create: shruberry request, pardon request,robotomy request \n";
    return 0;
}
