#include "Animal2.hpp"

Animall::~Animall()
{
    std::cout << "Destructor for Animall called" << std::endl;
}

Animall::Animall()
{
    this->type = "Animall"; 
    std::cout << "default constructor for Animall called" << std::endl;
}

Animall::Animall(const std::string type_)
{
    this->type = type_;
    std::cout << "a " << type_ << " is born" << std::endl;
}

Animall::Animall(const Animall &other)
{
    *this = other;
    std::cout << "copy constructor for Animall called" << std::endl;
}

Animall &Animall::operator=(const Animall &other){
    if (this != &other)
        this->type = other.type;
    std::cout << "copy assigment for Animall called" << std::endl;
    return *this;
}

void    Animall::makeSound(void) const
{
    std::cout << "Animall make sound !\n";
}

const std::string Animall::getType (void) const
{
    return (this->type);
}