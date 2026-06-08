#pragma once
#include <iostream>
#include <cstdint>

/**
 * @brief Класс для представления цвета в цветовой модели RGB.
 */
class Color 
{
public:
    /**
     * @brief Интенсивность красного цвета (0-255)
     */
    uint8_t red;   

    /**
     * @brief Интенсивность зеленого цвета (0-255)
     */
    uint8_t green; 

    /**
     * @brief Интенсивность синего цвета (0-255)
     */
    uint8_t blue;  

    /**
     * @brief Конструктор цвета с автоматической валидацией диапазонов
     * @param r Компонента красного цвета
     * @param g Компонента зеленого цвета
     * @param b Компонента синего цвета
     */
    Color(const int r = 0, const int g = 0, const int b = 0);

    /**
     * @brief Перегрузка оператора вывода в поток для удобного отображения цвета
     * @param os Ссылка на выходной поток 
     * @param c Константная ссылка на отображаемый объект цвета
     * @return Ссылка на тот же выходной поток для построения цепочек вывода.
     */
    friend std::ostream& operator<<(std::ostream& os, const Color& c);
};
