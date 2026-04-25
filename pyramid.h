#pragma once
#include "point3d.h"

class Pyramid 
{
private:

    Point3D p1, p2, p3; 
    Point3D top;       

public:

    Pyramid(Point3D p1, Point3D p2, Point3D p3, Point3D top);
    double getHeight() const;
    double getLateralArea() const;
};