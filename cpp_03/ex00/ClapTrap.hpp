#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
private:
    const std::string name;  //is it should be const or not think about it
    unsigned int h_point;
    unsigned int e_points;
    unsigned int at_damage;
public:
    ClapTrap(void);
    ClapTrap(std::string name_);
    ~ClapTrap();

    std::string get_name();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

std::ostream& operator<<(std::ostream &out, const ClapTrap &ohter);

#endif
