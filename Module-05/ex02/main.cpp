#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"


int main ()
{
    // too low grade
    RobotomyRequestForm imaed("imad");
    Bureaucrat imad("imad", 3);
    try
    {
        imaed.beSigned(imad);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // std::cout << " the rest\n";
    try
    {
        imaed.execute(imad);

    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    try
    {
        imaed.execute(imad);

    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    try
    {
        imaed.execute(imad);

    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
}
