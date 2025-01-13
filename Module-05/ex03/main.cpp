#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main ()
{
    Intern imad;

    AForm * form= imad.makeForm("shruberry request", "imad");
    std::cout << form->getName() << std::endl;
    delete form;
}
