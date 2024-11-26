

#include "Weapon.hpp"

void    Weapon::setType(std::string type_)
{
    this->type = type_;
}

const   std::string&    Weapon::getType()
{
    return this->type;
}


Weapon::Weapon(std::string type)
{
    this->setType(type);
}