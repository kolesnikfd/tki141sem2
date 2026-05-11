#pragma once
#include <iostream>

class Point 
{
private:
    int x;
    int y;
public:
    Point(const int x = 0, const int y = 0);
    int getX() const;
    int getY() const;
    void setX(int newX);
    void setY(int newY);
    friend std::ostream& operator<<(std::ostream& os, const Point& p);
    friend std::istream& operator>>(std::istream& is, Point& p);
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;
};