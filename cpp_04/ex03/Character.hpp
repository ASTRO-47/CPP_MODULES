#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Icharacter.hpp"


class Character: public ICharacter
{
private:
    std::string name;
    // also the materia array
public:
    Character(); // default constructor
    // for the canonical form
    Character(std::string const &name_);
    Character(const Character &other);
    Character& operator=(const Character &other);
    ~Character();

    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target); // use th weaoin ni the index on the  target
};

#endif


//     virtual std::string const & getName() const = 0;
//     virtual void equip(AMateria* m) = 0;
//     virtual void unequip(int idx) = 0;
    // virtual void use(int idx, ICharacter& target) = 0;