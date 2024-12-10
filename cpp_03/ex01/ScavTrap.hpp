#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    //
public:
    ScavTrap();
    ScavTrap(std::string name_);
    ScavTrap(const ScavTrap &other);
    ScavTrap &operator=(const ScavTrap& other);

    void   guardGate();
    void    attack();


    ~ScavTrap();
};

#endif