#include "Point.h"

Point::Point(int x, int y) : x(x), y(y) {}

int Point::getX() const { return x; }
int Point::getY() const { return y; }

void Point::setX(int newX) { x = newX; }
void Point::setY(int newY) { y = newY; }

bool Point::operator==(const Point& other) const 
{
    return (x == other.x && y == other.y);
}

bool Point::operator!=(const Point& other) const 
{
    return !(*this == other);
}

std::ostream& operator<<(std::ostream& os, const Point& p) 
{
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}

std::istream& operator>>(std::istream& is, Point& p) {
    is >> p.x >> p.y;
    return is;
}