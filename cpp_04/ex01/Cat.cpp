#include "Cat.hpp"

Cat::Cat(): Animal("Cat"){
    _br = new Brain();
    std::cout << "default constructor for Cat called\n";
}

Cat::~Cat(){
    delete _br;
    std::cout << "destructor for Cat called\n";
}


void    Cat::makeSound(void) const{
    std::cout << "myaaaw !\n";
}
