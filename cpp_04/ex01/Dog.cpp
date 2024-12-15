#include "Dog.hpp"

Dog::Dog(): Animal("Dog"){
    std::cout << "default constructor for Dog called\n";
}

Dog::~Dog(){
    std::cout << "destructor for Dog called\n";
}


void    Dog::makeSound(void) const{
    std::cout << "haww !\n";
}