#include "Character.hpp"

Character::Character() : name("")
{
    for (int i=0;i<4;i++)
    {
        this->ar[i] = NULL;
        this->gar[i] = NULL;
    }
    // std::cout << "default constructor for Character called\n" ;
}

Character::Character(std::string const &name_)
{
    this->name = name_;
    for (int i=0;i<4;i++)
    {
        this->ar[i] = NULL;
    }
    // std::cout << "Character " << name_ << " created\n";
}

Character::~Character()
{
    for (int i = 0;i < 4; i++)
    {
        if (this->ar[i])
            delete ar[i];
        if (this->gar[i])
            delete gar[i];
    }
    // g.clear();
    // std::cout << "destructor for Character called\n" ;
}

std::string const & Character::getName() const
{
    return this->name;
}

Character::Character(const Character &other)
{   
    *this = other;
    // std::cout << "copy constructor for Character called\n";
}

Character& Character::operator=(const Character &other)
{
    if (this != &other)
    {
        this->name = other.getName();
        for (int i=0;i < 4;i++)
        {
            if (!this->ar[i])
                this->ar[i] = NULL;
            else
                this->ar[i] = other.ar[i]->clone();
        }
    }
    // std::cout << "copy assigement for Character called\n";
    return *this;
}

void Character::equip(AMateria *m)
{

    for (int i =0;i < 4;i++)
    {
        if (!this->ar[i])
        {
            this->ar[i] = m;
            std::cout << this->name << " equiped " << m->getType() << " successfully" << std::endl;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    // what if try to remove some thing first and we have more materias
    if (idx >= 0 && idx < 4 && this->ar[idx])
    {
        // g.add(this->ar[idx]);
        this->gar[idx] = ar[idx];
        this->ar[idx] = NULL; // must NOT delete the Materia
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (!(idx >= 0 && idx < 4) || !this->ar[idx])
        return ;
    this->ar[idx]->use(target);
}
