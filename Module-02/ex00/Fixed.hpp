#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>

class Fixed {
private:
    int fixed_point;
    static const int fr_bits;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &obj);
    Fixed& operator=(const Fixed &obj);
    int    getRawBits() const;
    void      setRawBits(int const raw);
};

#endif
