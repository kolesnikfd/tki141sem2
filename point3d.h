#pragma once

class Point3D 
{
private:

    double x, y, z;

public:

    Point3D(const double x = 0, const double y = 0, const double z = 0);
    double getX() const;
    double getY() const;
    double getZ() const;
    double distanceTo(const Point3D& other) const;
};