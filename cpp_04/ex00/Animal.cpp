#include "Animal.hpp"

Animal::~Animal(){
    std::cout << "Destructor for Animal called" << std::endl;
}

Animal::Animal(){
    this->type = "Animal"; 
    std::cout << "constructor for Animal called" << std::endl;
}

Animal::Animal(const std::string type_){
    this->type = type_;
    std::cout << "a " << type_ << " is born" << std::endl;
}

Animal::Animal(const Animal &other){
    *this = other;
    std::cout << "copy constructor for Animal called" << std::endl;
}

Animal &Animal::operator=(const Animal &other){
    if (this != &other)
        this->type = other.type;
    std::cout << "copy assigment for Animal called" << std::endl;
    return *this;
}

