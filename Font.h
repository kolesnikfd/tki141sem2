#pragma once
#include <string>
#include "Color.h"

/**
 * @brief Класс, представляющий настройки шрифта (название, цвет, размер)
 */
class Font 
{
public:
    std::string name; /**< Название шрифта */
    Color color;      /**< Цвет шрифта */
    int size;         /**< Размер шрифта в пунктах */

    /**
     * @brief Конструктор шрифта
     * @param n Название шрифта (по умолчанию "Arial")
     * @param c Цвет шрифта (по умолчанию черный)
     * @param s Размер шрифта (по умолчанию 12)
     */
    Font(const std::string n = "Arial", const Color c = Color(0, 0, 0), const int s = 12)
        : name(n), color(c), size(s) {}

    /**
     * @brief Перегрузка оператора вывода в поток для шрифта
     * @param os Выходной поток
     * @param f Объект шрифта
     * @return Ссылка на выходной поток
     */
    friend std::ostream& operator<<(std::ostream& os, const Font& f) 
    {
        os << "Font: " << f.name << ", Size: " << f.size << ", Color: " << f.color;
        return os;
    }
};