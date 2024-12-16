#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
    std::string type;
public:
    Animal(); // just for the canonical
    Animal(const std::string type);
    Animal(const Animal &other);
    Animal& operator=(const Animal &other);
    
    virtual void    makeSound(void) const;
    const std::string getType(void) const;

    virtual ~Animal(); // if there is a virtual func to avoid the polymorphism  the destructor should also be virtual , so the compiler now which destructor to call
} ;


#endif