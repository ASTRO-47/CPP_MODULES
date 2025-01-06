#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal 
{
protected:
    std::string type;
public:
    WrongAnimal(); // for the canonical form
    WrongAnimal(const std::string type);
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal& operator=(const WrongAnimal &other);
    
    void    makeSound(void) const;
    const std::string getType(void) const;

    ~WrongAnimal();
} ;


#endif