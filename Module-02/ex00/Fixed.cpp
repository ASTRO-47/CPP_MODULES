#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->setRawBits(0);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    // no dynamic allocation to delete
}

Fixed::Fixed( const Fixed  &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(obj.getRawBits());
}


int     Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point);
}


void     Fixed::setRawBits(int const raw)
{
    this->fixed_point = raw;
}
 
Fixed& Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &obj)
        return *this;
    this->setRawBits(obj.getRawBits());
    return *this;
}