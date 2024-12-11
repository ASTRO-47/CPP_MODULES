#include "ClapTrap.hpp"

int main()
{

    ClapTrap fooo("fooo");
    ClapTrap braiin("braiin");


    fooo.attack("braiin");
    braiin.takeDamage(9);
    braiin.beRepaired(5);
}