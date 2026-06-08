#include "Color.h"
#include <stdexcept>

/**
 * @brief Реализация конструктора класса Color
 */
Color::Color(const int r, const int g, const int b) 
{
    if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255) 
    {
        throw std::out_of_range("Color values must be between 0 and 255");
    }
    red = static_cast<uint8_t>(r);
    green = static_cast<uint8_t>(g);
    blue = static_cast<uint8_t>(b);
}

/**
 * @brief Реализация дружественного оператора вывода в поток
 */
std::ostream& operator<<(std::ostream& os, const Color& c) 
{
    os << "RGB(" << static_cast<int>(c.red) 
       << "," << static_cast<int>(c.green) 
       << "," << static_cast<int>(c.blue) << ")";
    return os;
}
