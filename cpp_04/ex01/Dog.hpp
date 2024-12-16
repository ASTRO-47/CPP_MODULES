#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Dog: public Animal{
private:
//
public:
    Brain *_br; // make this private
    Dog();
    Dog(const Dog &other);
    Dog& operator=(const Dog &other);
    ~Dog();

    void    makeSound(void) const;
};
 
#endif