#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <cmath>

class Fixed {
private:
    int fixed_point;
    static const int fr_bits;
public:
    Fixed(const int n);
    Fixed(const float n);
    Fixed();
    ~Fixed();
    Fixed(const Fixed &obj);
    Fixed& operator=(const Fixed &obj);
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &i);

#endif
