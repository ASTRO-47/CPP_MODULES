#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
    std::cout << "default constructor for Cat called\n";
}

Cat::~Cat()
{
    std::cout << "destructor for Cat called\n";
}

Cat::Cat(const Cat &other) : Animal(other)
{
    *this = other;
    std::cout << "copy constructor for Cat called\n";
}
Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
       Animal::operator=(other); 
    std::cout << "copy assigment for Cat called\n";
    return *this;
}

void    Cat::makeSound(void) const{
    std::cout << "myaaaw !\n";
}
