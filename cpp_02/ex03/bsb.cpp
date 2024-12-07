#include "Point.hpp"

// the shoelace formula https://en.wikipedia.org/wiki/Shoelace_formula

// Area=∣x1​(y2​−y3​)+x2​(y3​−y1​)+x3​(y1​−y2​)∣ / 2 formula

/*the idea is to split the the triangle to 3 other
triangle and calculate the area of each one and compare them
with the original triangle , if the point is inside the triangle the 
sum of the 3 triangles will be the same with the original one*/

Fixed  absolute(Fixed val)
{
    if (val.toFloat() < 0)
        val.set_value();
    return (val);
}

const Fixed   cal_area(const Point &a, const Point &b, const Point &c)
{
    const Fixed f = a.get_x();
    return (Fixed(((a.get_x().toFloat() * (b.get_y().toFloat() - c.get_y().toFloat()))    
                + (b.get_x().toFloat() * (c.get_y().toFloat() - a.get_y().toFloat()))
                + (c.get_x().toFloat() * (a.get_y().toFloat() - b.get_y().toFloat()))) / 2));
}

bool bsp( Point const a, Point const b, Point const c, Point const p)
{

    const Fixed big_one = absolute(cal_area(a, b, c));
    const Fixed area_1 = absolute(cal_area(a, b, p));
    const Fixed area_2 = absolute(cal_area(a, c, p));
    const Fixed area_3 = absolute(cal_area(c, b, p));
    if (!area_1.toFloat() || !area_2.toFloat() || !area_3.toFloat())
        return (false);
    return (big_one == area_1 + area_2 + area_3);
}