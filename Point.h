#pragma once
#include <iostream>

/**
 * @brief Класс, представляющий точку в двумерном пространстве (X, Y)
 */
class Point 
{
private:
    int x; /**< Координата X */
    int y; /**< Координата Y */
public:
    /**
     * @brief Конструктор точки
     * @param x Координата по оси X 
     * @param y Координата по оси Y 
     */
    Point(const int x = 0, const int y = 0);

    /**
     * @brief Получить координату X
     * @return Значение координаты X
     */
    int getX() const;

    /**
     * @brief Получить координату Y
     * @return Значение координаты Y
     */
    int getY() const;

    /**
     * @brief Установить новое значение координаты X
     * @param newX Новое значение X
     */
    void setX(const int newX);

    /**
     * @brief Установить новое значение координаты Y
     * @param newY Новое значение Y
     */
    void setY(const int newY);

    /**
     * @brief Перегрузка оператора вывода в поток для точки
     * @param os Выходной поток
     * @param p Объект точки
     * @return Ссылка на выходной поток
     */
    friend std::ostream& operator<<(std::ostream& os, const Point& p);

    /**
     * @brief Перегрузка оператора ввода из потока для точки
     * @param is Входной поток
     * @param p Ссылка на объект точки для записи данных
     * @return Ссылка на входной поток
     */
    friend std::istream& operator>>(std::istream& is, Point& p);

    /**
     * @brief Оператор проверки равенства двух точек
     * @param other Другая точка для сравнения
     * @return true, если координаты совпадают, иначе false
     */
    bool operator==(const Point& other) const;

    /**
     * @brief Оператор проверки неравенства двух точек
     * @param other Другая точка для сравнения
     * @return true, если координаты различаются, иначе false
     */
    bool operator!=(const Point& other) const;
};