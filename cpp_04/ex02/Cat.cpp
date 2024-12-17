#include "Cat.hpp"

Cat::Cat(): Animall("Cat")
{
    this->_br = new (std::nothrow) Brain();
    if (!this->_br)
        exit (1);
    std::cout << "default constructor for Cat called\n";
}

Cat::~Cat()
{
    delete this->_br;
    std::cout << "destructor for Cat called\n";
}

Cat::Cat(const Cat &other) : Animall(other)
{
    *this = other;
    std::cout << "copy constructor for Cat called\n";
}
Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
       Animall::operator=(other); 
        this->_br = new (std::nothrow) Brain(*other._br);
        if (!this->_br)
            exit (1);
    }
    std::cout << "copy assigment for Cat called\n";
    return *this;
}

void    Cat::makeSound(void) const{
    std::cout << "myaaaw !\n";
}

