#pragma once
#include "Figure.h"
#include "Point.h"
#include "Font.h"
#include <string>

/**
 * @brief Класс для отображения текста на плоскости, унаследованный от Figure
 */
class Text : public Figure 
{
private:
    Point location;      /**< Позиция текста на плоскости */
    std::string message; /**< Содержимое текстового сообщения */
    Font font;           /**< Параметры шрифта */

public:
    /**
     * @brief Конструктор текстового элемента
     * @param p Координаты размещения текста
     * @param m Содержимое строки
     * @param f Шрифт текста
     */
    Text(const Point p = {0, 0}, const std::string m = "", const Font f = Font());

    /**
     * @brief Установить новый шрифт для текста
     * @param f Объект нового шрифта
     */
    void setFont(const Font& f) { font = f; }

    /**
     * @brief Перегруженный метод для получения строкового представления текста
     * @return Строка с подробной информацией о текстовом элементе
     */
    std::string ToString() const override;
    
    /**
     * @brief Статический метод для считывания объекта текста из потока ввода
     * @param is Входной поток
     * @return Сформированный объект класса Text
     */
    static Text read(std::istream& is);
};