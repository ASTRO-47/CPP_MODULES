#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
private:
    const Fixed x;
    const Fixed y;
public:
    Point();
    Point(const float x, const float y);
    Point(const Point &other);
    Point& operator=(const Point &other);
    const Fixed& get_x() const;
    const Fixed& get_y() const;
    
    ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const p);

#endif