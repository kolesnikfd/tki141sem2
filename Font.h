#pragma once
#include <string>
#include "Color.h"

class Font 
{
public:
    std::string name;
    Color color;
    int size;

    Font(std::string n = "Arial", Color c = Color(0, 0, 0), int s = 12)
        : name(n), color(c), size(s) {}

    friend std::ostream& operator<<(std::ostream& os, const Font& f) 
    {
        os << "Font: " << f.name << ", Size: " << f.size << ", Color: " << f.color;
        return os;
    }
};