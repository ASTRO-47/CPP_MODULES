#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name_): ClapTrap(name_){
    std::cout << "FragTrap " << name_  << " is born" << std::endl;

}

FragTrap::FragTrap() : ClapTrap(){
    std::cout << "default constructor for FragTrap called"<< std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "copy constructor for FragTrap called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
    std::cout << "copy assigment for FragTrap called" << std::endl;
    if (this == &other)
        return *this; // all the atributtes copying handeled by the ClapTrap copy assigement
    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "destructor for FragTrap  called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " high fives mate" << std::endl;
}

void    FragTrap::attack(const std::string &target)
{
    if (!this->h_point)
    {
        std::cout << "FragTrap "<< this->name << " is dead" << std::endl;
        return ;
    }
    if (!this->e_points)
    {
        std::cout << "FragTrap " << this->name << " have no enough energy points to attack !!" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->name <<  " attacks " << target <<  " causing " << this->at_damage << " points of damage!" << std::endl;
    this->e_points--;
}

