#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap ash( "Ash" );
    ScavTrap ash2( ash );

    ash.attack( "the air" );
    ash.beRepaired( 10 );
    ash.guardGate();

    return 0;
}