#pragma once
#include <iostream>

class Point 
{
private:
    int x;
    int y;
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    int getX() const { return x; }
    int getY() const { return y; }
    void setX(int newX) { x = newX; }
    void setY(int newY) { y = newY; }
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
