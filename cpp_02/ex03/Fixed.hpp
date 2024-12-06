#ifndef FIXED_HPP
#define FIXED_HPP


#include <cmath>
#include <iostream>


class Fixed {
private:
    int fixed_point_value;
    static const int fr_bits;
public:
    Fixed();
    Fixed(const int n);
    Fixed(const float n);
    Fixed(const Fixed &obj);
    Fixed& operator=(const Fixed &obj);
    ~Fixed();


    bool    operator>(const Fixed &rhs) const ;
    bool    operator<(const Fixed &rhs) const ;
    bool    operator>=(const Fixed &rhs) const ;
    bool    operator<=(const Fixed &rhs) const ;
    bool    operator==(const Fixed &rhs) const ;
    bool    operator!=(const Fixed &rhs) const ;

    Fixed operator*(const Fixed &other) const;
    Fixed operator+(const Fixed &other) const;
    Fixed operator-(const Fixed &other) const;
    Fixed operator/(const Fixed &other) const;


    Fixed& operator++(void);
    Fixed operator++(int);
    Fixed& operator--(void);
    Fixed operator--(int);

    static Fixed& max(Fixed &a, Fixed &b);
    static Fixed& min(Fixed &a, Fixed &b);

    static const Fixed& max(const Fixed &a, const Fixed &b);
    static const Fixed& min(const Fixed &a, const Fixed &b);

    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream& operator<<(std::ostream &out, Fixed const &i);

#endif
