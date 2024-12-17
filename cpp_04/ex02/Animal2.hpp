#ifndef ANIMAL2_HPP
#define ANIMAL2_HPP

#include <iostream>

class Animall {
protected:
    std::string type;
public:
    Animall(); // just for the canonical
    Animall(const std::string type);
    Animall(const Animall &other);
    Animall& operator=(const Animall &other);
    
    virtual void    makeSound(void) const = 0;
    const std::string getType(void) const;

    virtual ~Animall(); 
} ;


#endif