#include "Character.hpp"

Character::Character()
{
    std::cout << "default constructor for Character called\n" ;
}

Character::Character(std::string const &name_)
{
    this->name = name_;
    std::cout << "Character " << name_ << " created\n";
}

Character::~Character()
{
    std::cout << "destructor for Character called\n" ;
}

std::string const & Character::getName() const
{
    return this->name;
}

Character::Character(const Character &other)
{   
    *this = other;
    std::cout << "copy constructor for Character called\n";
}

Character& Character::operator=(const Character &other)
{
    if (this != &other)
    {
        this->name = other.getName(); // i can get the name direct though
        // should do something else?
    }
    std::cout << "copy assigement for Character called\n";
    return *this;
}

void Character::equip(AMateria *m)
{
    if (!m)
        return ;
    if (this->i == 3)
        return ;
    this->ar[i] = m;
    this->i++;
}

void Character::unequip(int idx)
{
    if (idx > this->i) // check this when done
        return ;
    // what if try to remove some thing first and we have more materias
    this->ar[idx] = NULL; // must NOT delete the Materia
    this->i--;
}

void Character::use(int idx, ICharacter &target)
{
    if (!this->ar[idx])
        return ;
    this->ar[idx]->use(target);
    // print a message to attack the enemy
}


