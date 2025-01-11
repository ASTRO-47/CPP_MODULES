#include "Bureaucrat.hpp"

// stack unwding

int main ()
{
    try
    {
        Bureaucrat imad("imad" , 156);
    }
    catch (std::exception &e)
    {
        std::cout << e.what();
    }
    // std::cout << imad;
    // try
    // {
    //    imad.downgrade();
    // }
    // catch(std::exception & e)
    // {
    //     std::cerr << e.what() << '\n';
    //     // std::cout << ;
    // }
    // std::cout << "got to the end of the program\n";
}