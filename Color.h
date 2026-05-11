#pragma once
#include <iostream>
#include <cstdint>
#include <stdexcept>

class Color 
{
public:
    uint8_t red, green, blue;

    Color(const int r = 0, const int g = 0, const int b = 0) 
    {
        if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255) 
        {
            throw std::out_of_range("Color values must be between 0 and 255");
        }
        red = static_cast<uint8_t>(r);
        green = static_cast<uint8_t>(g);
        blue = static_cast<uint8_t>(b);
    }

    friend std::ostream& operator<<(std::ostream& os, const Color& c) 
    {
        os << "RGB(" << (int)c.red << "," << (int)c.green << "," << (int)c.blue << ")";
        return os;
    }
};
