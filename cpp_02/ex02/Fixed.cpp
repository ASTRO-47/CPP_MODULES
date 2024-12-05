#include "Fixed.hpp"

Fixed::Fixed(const int n) : fixed_point_value(n * (1 << Fixed::fr_bits))
{
    std::cout << "Int constructor called" << std::endl;
    
}

Fixed::Fixed(const float n) : fixed_point_value(roundf(n * (1 << Fixed::fr_bits)))
{
    std::cout << "Float constructor called" << std::endl;

}

float Fixed::toFloat( void ) const{
    return (float)(this->fixed_point_value) / (1 << Fixed::fr_bits);
}

int Fixed::toInt( void ) const{
    return this->fixed_point_value  >> Fixed::fr_bits;
}

Fixed::Fixed() : fixed_point_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" <<std::endl;
    // no dynamic allocation in the class
}

Fixed::Fixed( const Fixed  &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed_point_value = obj.fixed_point_value;
}


Fixed& Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &obj)
        return *this;
    this->fixed_point_value = obj.fixed_point_value;;
    return *this;
}

std::ostream& operator<<(std::ostream &out, Fixed const &i)
{
    out << i.toFloat();
    return out;
}

Fixed   Fixed::operator*(Fixed const &other)
{
    std::cout << other.fixed_point_value / 256 << " " << (float)this->fixed_point_value / 256<< "]\n";
    return (Fixed((float)this->fixed_point_value * other.fixed_point_value));
}