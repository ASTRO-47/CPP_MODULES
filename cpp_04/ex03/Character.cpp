#include "Character.hpp"

Character::Character() : name("")
{
    std::cout << "default constructor for Character called\n" ;
}

Character::Character(std::string const &name_)
{
    this->name = name_;
    for (int i=0;i<0;i++)
    {
        this->ar[i] = NULL;
    }
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
    // std::cout << i << "]\n";
    for (int i =0;i < 4;i++)
    {
        if (!this->ar[i])
        {
            this->ar[i] = m;
            std::cout << this->name << " equip a " << m->getType() << std::endl;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    // what if try to remove some thing first and we have more materias
    if (this->ar[idx])
        this->ar[idx] = NULL; // must NOT delete the Materia
}

void Character::use(int idx, ICharacter &target)
{
    if (!this->ar[idx])
        return ;
    this->ar[idx]->use(target);
    // print a message to attack the enemy
}
