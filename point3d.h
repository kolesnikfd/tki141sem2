#pragma once

class Point3D 
{
private:

    double x, y, z;

public:

    Point3D(double x = 0, double y = 0, double z = 0);
    double getX() const;
    double getY() const;
    double getZ() const;
    double distanceTo(const Point3D& other) const;
};