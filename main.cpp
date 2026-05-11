#include <iostream>
#include <string>
#include "point3d.h"
#include "pyramid.h"

double getValue(std::string prompt)
{
    std::cout << prompt << std::flush;
    double value;
    if (!(std::cin >> value)) {
        std::cout << "\n[!] Error: Invalid numeric input!" << std::endl;
        exit(1);
    }
    return value;
}

int main()
{
    std::cout << "===========================================" << std::endl;
    std::cout << "        REGULAR PYRAMID CALCULATOR         " << std::endl;
    std::cout << "===========================================" << std::endl;

    std::cout << "\n--- Base Point 1 ---" << std::endl;
    double x1 = getValue(" Enter x: ");
    double y1 = getValue(" Enter y: ");
    double z1 = getValue(" Enter z: ");
    Point3D p1(x1, y1, z1);

    std::cout << "\n--- Base Point 2 ---" << std::endl;
    double x2 = getValue(" Enter x: ");
    double y2 = getValue(" Enter y: ");
    double z2 = getValue(" Enter z: ");
    Point3D p2(x2, y2, z2);

    std::cout << "\n--- Base Point 3 ---" << std::endl;
    double x3 = getValue(" Enter x: ");
    double y3 = getValue(" Enter y: ");
    double z3 = getValue(" Enter z: ");
    Point3D p3(x3, y3, z3);

    std::cout << "\n--- Apex (Top) ---" << std::endl;
    double xt = getValue(" Enter x: ");
    double yt = getValue(" Enter y: ");
    double zt = getValue(" Enter z: ");
    Point3D top(xt, yt, zt);

    Pyramid myPyramid(p1, p2, p3, top);

    std::cout << "\n-------------------------------------------" << std::endl;
    std::cout << " RESULTS:" << std::endl;

    std::cout << "  - Pyramid Height:         " << myPyramid.getHeight() << std::endl;
    std::cout << "  - Lateral Surface Area:   " << myPyramid.getLateralArea() << std::endl;
    std::cout << "-------------------------------------------" << std::endl;

    std::cout << "\nCalculation complete. Press Enter to exit..." << std::endl;
    std::cin.ignore(10000, '\n');
    std::cin.get();

    return 0;
}