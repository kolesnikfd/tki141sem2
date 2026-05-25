#pragma once
#include <string>
#include <iostream>

/**
 * @brief Базовый класс для геометрических фигур
 */
class Figure 
{
public:
    /**
     * @brief Деструктор
     */
    virtual ~Figure() = default;

    /**
     * @brief Метод для преобразования объекта в строку
     * @return Текстовое представление фигуры
     */
    virtual std::string ToString() const = 0;

    /**
     * @brief Перегрузка оператора вывода в поток
     * @param os Выходной поток
     * @param f Объект фигуры для вывода
     * @return Ссылка на выходной поток
     */
    friend std::ostream& operator<<(std::ostream& os, const Figure& f);
};