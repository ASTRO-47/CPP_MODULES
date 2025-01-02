#ifndef AMETARIA_HPP
#define AMETARIA_HPP

#include "Icharacter.hpp"

class AMateria
{
protected:
    std::string type;// for ice and cure 
    //
public:
    AMateria(std::string const & type);
    ~AMateria();

    std::string const & getType() const; // Returns the materia type
    virtual AMateria* clone() const = 0; // virtual to avoid the conflicts with the derived classes
    virtual void use(ICharacter& target); // should implement this
};

#endif