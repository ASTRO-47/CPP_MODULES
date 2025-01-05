#ifndef AMETARIA_HPP
#define AMETARIA_HPP

#include "Icharacter.hpp"

class AMateria
{
protected:
    std::string type;// for ice and cure 
    //;
public:
    AMateria();
    AMateria(std::string const & type);
    std::string const & getType() const; // returns the materia type
    AMateria(const AMateria &other);
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target); 

    virtual ~AMateria();
};

#endif