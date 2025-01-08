#include "Point.hpp"

Point::Point() : x(0), y(0){
    // std::cout << "default constructor called" << std::endl;
}

Point::~Point(){
    // std::cout << "destructor called" << std::endl;
}

Point::Point(const float x_, const float y_): x(x_), y(y_){
    // std::cout << "default constructor called" << std::endl;
}

Point::Point(const Point &other) : x(other.x) , y(other.y)
{
    // std::cout << "copy constructor called" << std::endl;
}

Point& Point::operator=(const Point &other)
{
    if (this != &other)
    {
        (Fixed) this->x = other.x;
        (Fixed) this->y = other.y;
    }
    return *this;
}

const Fixed& Point::get_x() const
{
    return (this->x);
}

const Fixed& Point::get_y() const
{
    return (this->y);
}