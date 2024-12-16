#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
    std::cout << "default constructor for WrongCat called\n";
}

WrongCat::~WrongCat()
{
    std::cout << "destructor for WrongCat called\n";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    *this = other;
    std::cout << "copy constructor for WrongCat called\n";
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
       WrongAnimal::operator=(other); 
    std::cout << "copy assigment for WrongCat called\n";
    return *this;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Wrongcat :myaaaw !\n";
}


