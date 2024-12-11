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
    void get_datat(){
        std::cout << this->h_point << std::endl;
    }
    void highFivesGuys(void);

    ~FragTrap();
};

#endif