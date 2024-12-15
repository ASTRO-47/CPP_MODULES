#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal(){
    std::cout << "Destructor for WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(){
    this->type = "WrongAnimal"; 
    std::cout << "default constructor for WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type_){
    this->type = type_;
    std::cout << "a " << type_ << " is born" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other){
    *this = other;
    std::cout << "copy constructor for WrongAnimal called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
    if (this != &other)
        this->type = other.type;
    std::cout << "copy assigment for WrongAnimal called" << std::endl;
    return *this;
}

void    WrongAnimal::makeSound(void) const{
    std::cout << "WrongAnimal make sound !\n";
}

const std::string WrongAnimal::getType (void) const{
    return (this->type);
}