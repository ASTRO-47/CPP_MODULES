#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap  : public ScavTrap, public FragTrap
{
private:
    std::string name;
public:
    DiamondTrap(); //default constructor
    DiamondTrap(const DiamondTrap &other); // copy constructor
    DiamondTrap& operator=(const DiamondTrap &other); //cpy assigment
    ~DiamondTrap();
    DiamondTrap(std::string name);
    //
};

#endif


/*-------------------notes-----------------

the pulbic inheritance: the private attres not accessble from the derived class, the but using a member func
in the base class make it accessble, and the public attres of the base class can be access directly from obejcts,
and the protected attres from the base class handeled like a private attres on the derived class

the protected inheritance: the protected one its also like the public,unless we can not access to public attres from the derived
class, and the private attres the same as the public inheritance


the private: nothing is accessble from the derived class, unless the protected attres

*/