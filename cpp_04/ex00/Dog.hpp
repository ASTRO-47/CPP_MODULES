#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"


class Dog: public Animal{
private:
//
public:
    Dog();
    ~Dog();

    void    makeSound(void) const;
};
class test{
    public: 
    std::string name;
};
#endif