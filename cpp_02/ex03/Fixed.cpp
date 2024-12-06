#include "Fixed.hpp"

Fixed::Fixed(const int n) : fixed_point_value(n * (1 << Fixed::fr_bits))
{
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : fixed_point_value(roundf(n * (1 << Fixed::fr_bits)))
{
    // std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat( void ) const{
    return (float)(this->fixed_point_value) / (1 << Fixed::fr_bits);
}

int Fixed::toInt( void ) const{
    return this->fixed_point_value  >> Fixed::fr_bits;
}

Fixed::Fixed() : fixed_point_value(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" <<std::endl;
    // no dynamic allocation in the class
}

Fixed::Fixed( const Fixed  &obj) //copy constructor
{
    // std::cout << "Copy constructor called" << std::endl;
    this->fixed_point_value = obj.fixed_point_value;
}


Fixed& Fixed::operator=(const Fixed &obj)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this == &obj)
        return *this;
    this->fixed_point_value = obj.fixed_point_value;;
    return *this;
}


    /*the insertion operator overloading*/

std::ostream& operator<<(std::ostream &out, Fixed const &i)
{
    out << i.toFloat();
    return out;
}


    /*arithmetic operators*/


Fixed   Fixed::operator*(Fixed const &other) const
{
    return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed   Fixed::operator+(Fixed const &other) const
{
    return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed   Fixed::operator-(Fixed const &other) const
{
    return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed   Fixed::operator/(Fixed const &other) const
{
    return (Fixed(this->toFloat() / other.toFloat()));
}



     /*pre and post increment*/

Fixed&   Fixed::operator++(void)
{
    this->fixed_point_value++;
    return *this;
}

Fixed  Fixed::operator++(int) // dummy var to intrepet the post increment
{
    Fixed tmp = *this;
    this->fixed_point_value++;
    return tmp;
}

Fixed&   Fixed::operator--(void)
{
    this->fixed_point_value--;
    return *this;
}

Fixed  Fixed::operator--(int) // dummy var to intrepet the post increment
{
    Fixed tmp = *this;
    this->fixed_point_value--;
    return tmp;
}


        /*comparison operators*/

bool    Fixed::operator>( const Fixed &rhs ) const {
    return (this->fixed_point_value > rhs.fixed_point_value);
}

bool    Fixed::operator<( const Fixed &rhs ) const {
    return this->fixed_point_value < rhs.fixed_point_value;
}

bool    Fixed::operator>=( const Fixed &rhs ) const {
    return this->fixed_point_value >= rhs.fixed_point_value;
}

bool   Fixed::operator<=( const Fixed &rhs ) const {
    return this->fixed_point_value <= rhs.fixed_point_value;
}

bool  Fixed::operator==( const Fixed &rhs ) const {
    return this->fixed_point_value == rhs.fixed_point_value;
}

bool    Fixed::operator!=( const Fixed &rhs ) const {
    return this->fixed_point_value != rhs.fixed_point_value;
}

/*min and max */


Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a > b)
        return (b);
    return (a);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return (b);
    return (a);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}


// 0
// 0.00390625
// 0.00390625
// 0.00390625
// 0.0078125
// 10.1016
// 10.1016