#pragma once
#include <iostream>

struct Point 
{
    int x, y;

    friend std::ostream& operator<<(std::ostream& os, const Point& p) 
    {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Point& p) 
    {
        is >> p.x >> p.y;
        return is;
    }
};