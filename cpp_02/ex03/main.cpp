#include "Point.hpp"

const int Fixed::fr_bits = 8;

int main( void ) 
{
    if (bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(30, 15)) == true)
        std::cout << "the point is inside the trianle" << std::endl;
    else
        std::cout << "the point it's not in the triangle" << std::endl;
    return 0;
}