#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Animal2.hpp"
#include "Brain.hpp"


class Dog: public Animall{
private:
    Brain *_br;
//
public:
    Dog();
    Dog(const Dog &other);
    Dog& operator=(const Dog &other);
    ~Dog();

    void    makeSound(void) const;
};
 
#endif