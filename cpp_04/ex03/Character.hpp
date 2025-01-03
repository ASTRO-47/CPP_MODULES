#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Icharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
private:
    std::string name;
    AMateria *ar[4];
    // polymor
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
