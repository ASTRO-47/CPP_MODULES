#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
    //
public:
    FragTrap(); //need to know which one is selected in the constructing step
    FragTrap(std::string name_);
    FragTrap(const FragTrap &other);
    FragTrap &operator=(const FragTrap& other);

    void highFivesGuys(void);

    ~FragTrap();
};

#endif


/*--------------diamond problem in inheritance---------------


the diamond problem is an ambiguity error that arises in multiple 
inheritance when a derived class inherits from two or more base classes 
that share a common ancestor. This results in the inheritance hierarchy 
forming a diamond shape, hence the name "Diamond Problem." The ambiguity
arises because the derived class has multiple paths to access members 
or methods inherited from the common ancestor, leading to confusion
during method resolution and member access.


*/


/*https://stackoverflow.com/questions/2659116/how-does-virtual-inheritance-solve-the-diamond-multiple-inheritance-ambiguit/2659186#2659186

how the virtual inheritance solve the diamond porblem*/