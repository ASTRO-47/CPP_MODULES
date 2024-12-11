#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    FragTrap ash( "Ash" );
    FragTrap ash2 (ash);

    ash2.get_datat();
    ash.get_datat();
    // ash.attack( "the air" );
    // ash.takeDamage( 10 );
    // ash.beRepaired( 10 );
    // ash.highFivesGuys();

    return 0;
}