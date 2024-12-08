#include "ClapTrap.hpp"
 
ClapTrap::ClapTrap(std::string name_) : name(name_), h_point(10), e_points(10), at_damage(0)
{
    std::cout << "constructor called" << std::endl;
}


ClapTrap::ClapTrap(void)
{
   std::cout << "default constructor called" << std::endl;

}

ClapTrap::~ClapTrap(void)
{
    std::cout << "destructor called" << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
    std::cout << *this <<  "attacks" << target <<  "causing" << this->at_damage << "points of damage!" << std::endl;
}

std::ostream& operator<<(std::ostream &out, const ClapTrap &other)
{
    out << other.get_name();
    return out;
}

std::string ClapTrap::get_name()
{
    return (this->name);
}