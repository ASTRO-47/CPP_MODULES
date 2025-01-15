#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name_): ClapTrap(name_)
{
    //should build the claptrap first
    name = name_;
    ClapTrap::name = name + "_clap_name";
    FragTrap::h_point = 100;
    ScavTrap::e_points = 50;
    FragTrap::at_damage = 30;
    std::cout << "DiamondTrap " << name_  << " is born" << std::endl;
}

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "default constructor for DiamondTrap called"<< std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other.name + "_clap_name"), ScavTrap(other), FragTrap(other)
{
    *this = other;
    std::cout << "copy constructor for DiamondTrap called" << std::endl;
}   

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        this->name = other.name; // all the atributtes copying handeled by the ClapTrap copy assigement
    }
    std::cout << "copy assigment for DiamondTrap called" << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "destructor for DiamondTrap  called" << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "this is DiamondTrap " << this->name << " and ClapTrap " << ClapTrap::name << " here" << std::endl;
}

void    DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}