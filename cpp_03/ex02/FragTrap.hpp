#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    //
public:
    FragTrap();
    FragTrap(std::string name_);
    FragTrap(const FragTrap &other);
    FragTrap &operator=(const FragTrap& other);

    void highFivesGuys(void);

    ~FragTrap();
};

#endif