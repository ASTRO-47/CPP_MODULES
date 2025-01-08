#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
    std::cout << "default constructor for Dog called\n";
}

Dog::~Dog()
{
    std::cout << "destructor for Dog called\n";
}

Dog::Dog(const Dog &other) : Animal(other)
{
    *this = other;
    std::cout << "copy constructor for Dog called\n";
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
       Animal::operator=(other); 
    std::cout << "copy assigment for Dog called\n";
    return *this;
}

void    Dog::makeSound(void) const
{
    std::cout << "wooof woof!\n";
}