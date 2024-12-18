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

    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
} ;


#endif


// arrr[4] = ice, cure, NULL, NULL

// arr[0]->clone()