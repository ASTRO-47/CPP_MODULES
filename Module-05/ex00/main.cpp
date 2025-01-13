#include "Bureaucrat.hpp"


// stack unwding

// when catch a throwen exception by value could made a slicing

// another reason to catch excptio by reference make you catch every class derived from the std::exception class
// and this because of the polymorphism

// in a try block if an exception throwed all the work inside the block canceled (destroyed)
// the  exception objects stored in special memory region that's its lifetime more than the usual objects


// if there is no catch block and an exception throwen a function called unxpected and stops the code




int main ()
{
    // two example (consturcting the object, modify the grade)
    try
    {
        Bureaucrat imad("imad", 35);
    }
    catch(const std::exception& e)
    {
        std::cerr << "failed: " << e.what() << '\n';
    }
    
    Bureaucrat imad("imad_beta", 1);
    try
    {
        imad.upgrade();
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << "faild: " << e.what() << std::endl;
    }
}