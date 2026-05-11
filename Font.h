#pragma once
#include <string>
#include "Color.h"

class Font 
{
public:
    std::string name;
    Color color;
    int size;

    Font(const std::string n = "Arial", const Color c = Color(0, 0, 0), const int s = 12)
        : name(n), color(c), size(s) {}

    friend std::ostream& operator<<(std::ostream& os, const Font& f) 
    {
        os << "Font: " << f.name << ", Size: " << f.size << ", Color: " << f.color;
        return os;
    }
};
