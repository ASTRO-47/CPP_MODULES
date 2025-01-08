#include "HumanB.hpp"

void    HumanB::attack()
{
    std::cout <<  this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name_)
{
    this->name = name_;
}

void    HumanB::setWeapon(Weapon &w)
{
    this->weapon = &w;
}