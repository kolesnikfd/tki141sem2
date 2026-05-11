#include "point3d.h"
#include <cmath>

Point3D::Point3D(double x, double y, double z) : x(x), y(y), z(z) {}

double Point3D::getX() const { return x; }
double Point3D::getY() const { return y; }
double Point3D::getZ() const { return z; }

double Point3D::distanceTo(const Point3D& other) const 
{
    return std::sqrt(std::pow(x - other.x, 2) + 
                     std::pow(y - other.y, 2) + 
                     std::pow(z - other.z, 2));
}