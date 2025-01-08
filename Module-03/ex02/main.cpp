#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    FragTrap ash( "Ash" );
    FragTrap ash2(ash);

    ash.attack( "the air" );
    ash2.takeDamage( 10 );
    ash2.beRepaired( 10 );

    return 0;
}