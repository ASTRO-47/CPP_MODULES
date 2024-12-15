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

    virtual ~Animal();
} ;


#endif