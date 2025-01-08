#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
private:
    std::string name;
    unsigned int h_point;
    unsigned int e_points;
    unsigned int at_damage;
public:
    ClapTrap(void);
    ClapTrap(std::string name_);
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &other);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
