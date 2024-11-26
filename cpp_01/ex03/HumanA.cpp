#include "HumanA.hpp"

void    HumanA::attack()
{
    std::cout <<  this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name_, Weapon &w) : weapon(w)
{
    this->name = name_;
}
