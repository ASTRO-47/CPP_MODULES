#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat"){
    std::cout << "default constructor for WrongCat called\n";
}

WrongCat::~WrongCat(){
    std::cout << "destructor for WrongCat called\n";
}


void    WrongCat::makeSound(void) const{
    std::cout << "Wrongcat :myaaaw !\n";
}