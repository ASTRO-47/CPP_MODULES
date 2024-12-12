#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout << "default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name_) : name(name_), h_point(10), e_points(10), at_damage(0)
{
    std::cout << "ClapTrap " << name_ << " is born" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "destructor called" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap &other)
{
    this->name = other.name;
    std::cout << "copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "copy assigment operator called" << std::endl;
    if (this == &other)
        return *this;
    this->h_point = other.h_point; // if we use just var names without this what should happen
    this->at_damage = other.at_damage;
    this->e_points = other.e_points;
    this->h_point = other.h_point;
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
        std::cout << this->name << " is dead" << std::endl;
        return ;
    }
    if (!this->e_points)
    {
        std::cout << "oooh " << " no enough enrgy points" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " repairs itself for " << amount << " hit points!" << std::endl;
    this->h_point += amount;
    this->e_points--;
}