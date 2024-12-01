#include "Fixed.hpp"

int main( void ) {
    float first = 1234.859;
    float c = roundf(first * 256);
    std::cout << c << std::endl;
    std::cout << (float)c  / 256 << std::endl;
        
        // std::cout  << me << std::endl;
    // std::cout  << (float)me / 256 << std::endl;
    // Fixed a;
    // Fixed const b( 10 );
    // Fixed const c( 42.42f );
    // Fixed const d( b );
    // a = Fixed( 1234.4321f );
    // std::cout << "a is " << a << std::endl;
    // std::cout << "b is " << b << std::endl;
    // std::cout << "c is " << c << std::endl;
    // std::cout << "d is " << d << std::endl;
    // std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    // std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    // std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    // std::cout << "d is " << d.toInt() << " as integer" << std::endl;
return 0;
}