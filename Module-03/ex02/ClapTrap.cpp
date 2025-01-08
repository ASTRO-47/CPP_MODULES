#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    //nothing to do
    std::cout << "default constructor for ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string name_) : name(name_), h_point(10), e_points(10), at_damage(0)
{
    std::cout << "ClapTrap " << name_ << " is born" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "destructor for ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
    std::cout << "copy constructor for ClapTrap called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->h_point = other.h_point;
        this->at_damage = other.at_damage;
        this->e_points = other.e_points;
    }
    std::cout << "copy assigment for ClapTrap called" << std::endl;
    return *this;
}

void    ClapTrap::attack(const std::string &target)
{
    if (!this->h_point)
    {
        std::cout << "ClapTrap "<< this->name << " is dead" << std::endl;
        return ;
    }
    if (!this->e_points)
    {
        std::cout << "ClapTrap " << this->name << " have no enough energy points to attack !!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name <<  " attacks " << target <<  " causing " << this->at_damage << " points of damage!" << std::endl;
    this->e_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->h_point <= amount)
    {
        std::cout << "ClapTrap "<< this->name << " is dead" << std::endl;
        return ;
    }
    std::cout << "ClapTrap "<< this->name <<  " takes "  << amount  << " of damage!" << std::endl;
    this->h_point -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->h_point <= 0) //nothing can do if he is already dead
    {
        std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
        return ;
    }
    if (!this->e_points)
    {
        std::cout << "ClapTrap " << this->name << " have no enough enrgy points to repair" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " repairs itself for " << amount << " hit points!" << std::endl;
    this->h_point += amount;
    this->e_points--;
}
