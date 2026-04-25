#include <iostream>
#include <string>
#include "point3d.h"
#include "pyramid.h"

double getValue(std::string prompt)
{
    std::cout << prompt << std::flush;
    double value;
    while (!(std::cin >> value)) {
        std::cout << "Invalid input! Please enter a number: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    return value;
}

int main()
{
    std::cout << "=== Regular Pyramid Calculator (Variant 11) ===" << std::endl;
    std::cout << "Enter 3 consecutive base points and the apex point:" << std::endl;

    Point3D p1(getValue("P1 x: "), getValue("P1 y: "), getValue("P1 z: "));
    Point3D p2(getValue("P2 x: "), getValue("P2 y: "), getValue("P2 z: "));
    Point3D p3(getValue("P3 x: "), getValue("P3 y: "), getValue("P3 z: "));
    Point3D top(getValue("Top x: "), getValue("Top y: "), getValue("Top z: "));

    Pyramid myPyramid(p1, p2, p3, top);

    std::cout << "\n--- Calculation Results ---" << std::endl;
    std::cout << "Height: " << myPyramid.getHeight() << std::endl;
    std::cout << "Lateral Surface Area: " << myPyramid.getLateralArea() << std::endl;

    std::cout << "\nDone. Press Enter to exit..." << std::endl;
    std::cin.ignore(10000, '\n');
    std::cin.get();

    return 0;
}