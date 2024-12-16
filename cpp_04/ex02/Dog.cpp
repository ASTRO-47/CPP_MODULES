#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
    this->_br = new (std::nothrow) Brain();
    if (!this->_br)
        exit (1);
    std::cout << "default constructor for Dog called\n";
}

Dog::~Dog()
{
    delete this->_br;
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
    {
       Animal::operator=(other);
        this->_br = new (std::nothrow) Brain(*other._br);
        if (!this->_br)
            exit (1);
    }
    std::cout << "copy assigment for Dog called\n";
    return *this;
}

void    Dog::makeSound(void) const
{
    std::cout << "wooof woof!\n";
}

