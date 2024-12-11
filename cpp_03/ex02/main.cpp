#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    FragTkrap ash( "Ash" );
    FragTrap ash2 (ash);

    ash.attack( "the air" );
    ash.taeDamage( 10 );
    ash.beRepaired( 10 );
    ash.highFivesGuys();

    return 0;
}