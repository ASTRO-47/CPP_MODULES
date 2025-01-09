#include "Bureaucrat.hpp"


void nothing()
{
    int error = 42;
    if (true)
        throw error;
    std::cout <<  "hello world";
}

int main ()
{
    Bureaucrat imad("imad" , 1);
    std::cout << imad;
    int i = 9;
    try
    {
        nothing();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "hello world";
}
