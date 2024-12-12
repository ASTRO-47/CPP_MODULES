#include "Cat.hpp"

Cat::Cat(): Animal("Cat"){
    std::cout << "default constructor for Cat called\n";
}

Cat::~Cat(){
    std::cout << "destructor for Cat called\n";
}
