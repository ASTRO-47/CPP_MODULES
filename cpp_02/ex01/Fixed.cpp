#include "Fixed.hpp"

Fixed::Fixed(const float)
{
}
Fixed::Fixed()
{
}

Fixed::~Fixed()
{
    // no dynamic allocation to delete
}

Fixed::Fixed( const Fixed  &obj)
{
    if (obj.fixed_point)
        std::cout << "" << std::flush;
}



Fixed& Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &obj)
        return *this;
    
    return *this;
}