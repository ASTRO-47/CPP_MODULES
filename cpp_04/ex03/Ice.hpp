
#ifndef ICE_HPP
#define ICE_HPP


#include  "AMateria.hpp"

class Ice: public AMateria
{
private:
    //
public:
    Ice();
    Ice(Ice const &other);
    Ice &operator=(Ice const &other);
    void use(ICharacter &target);
    Ice *clone() const;

    ~Ice();// dest
} ;


#endif