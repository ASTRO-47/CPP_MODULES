#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
private:

public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(std::string name_);
    ScavTrap(const ScavTrap &other);

    void   guardGate();
};

#endif