#include "pyramid.h"
#include <cmath>
#include <iostream>

Pyramid::Pyramid(Point3D p1, Point3D p2, Point3D p3, Point3D top) : p1(p1), p2(p2), p3(p3), top(top) {}

double Pyramid::getHeight() const 
{
    
    double centerX = (p1.getX() + p3.getX()) / 2.0;
    double centerY = (p1.getY() + p3.getY()) / 2.0;
    double centerZ = (p1.getZ() + p3.getZ()) / 2.0;
    Point3D center(centerX, centerY, centerZ);
    return top.distanceTo(center);
}

double Pyramid::getLateralArea() const 
{
    double side = p1.distanceTo(p2);
    double h = getHeight();
    double apothem = std::sqrt(std::pow(h, 2) + std::pow(side / 2.0, 2));
    return 2.0 * side * apothem;
}