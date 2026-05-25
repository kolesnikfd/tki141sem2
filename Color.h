#pragma once
#include <iostream>
#include <cstdint>
#include <stdexcept>

/**
 * @brief Класс для представления цвета в формате RGB
 */
class Color 
{
public:
    uint8_t red;   /**< Интенсивность красного цвета (0-255) */
    uint8_t green; /**< Интенсивность зеленого цвета (0-255) */
    uint8_t blue;  /**< Интенсивность синего цвета (0-255) */

    /**
     * @brief Конструктор цвета с валидацией диапазонов
     * @param r Компонента красного (0-255)
     * @param g Компонента зеленого (0-255)
     * @param b Компонента синего (0-255)
     * @throws std::out_of_range Если какое-либо значение выходит за пределы [0, 255]
     */
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

    /**
     * @brief Перегрузка оператора вывода в поток для цвета
     * @param os Выходной поток
     * @param c Объект цвета
     * @return Ссылка на выходной поток
     */
    friend std::ostream& operator<<(std::ostream& os, const Color& c) 
    {
        os << "RGB(" << (int)c.red << "," << (int)c.green << "," << (int)c.blue << ")";
        return os;
    }
};