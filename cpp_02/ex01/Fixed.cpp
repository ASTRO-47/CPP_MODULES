#include "Fixed.hpp"

Fixed::Fixed(const int n) : fixed_point(n)
{
    std::cout << "Int constructor called" << std::endl;
    
}

Fixed::Fixed(const float n) : fixed_point(roundf(n * (1 << Fixed::fr_bits)))
{
    std::cout << "Float constructor called" << std::endl;

}


Fixed::Fixed() : fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" <<std::endl;
    // no dynamic allocation to delete
}

Fixed::Fixed( const Fixed  &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed_point = obj.fixed_point;
}


Fixed& Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &obj)
        return *this;
    this->fixed_point = obj.fixed_point;;
    return *this;
}

std::ostream &operator<<(std::ostream &out, Fixed &i)
{
    out << i.to
    return out;
}