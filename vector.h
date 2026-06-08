#pragma once
#include <iostream>
#include <initializer_list>
#include <string>

/**
 * @brief Класс Динамический Вектор (массив целых чисел)
 */
class Vector
{
private:
    /**
     * @brief Указатель на массив элементов в динамической памяти
     */
    int *m_elements;

    /**
     * @brief Количество элементов, хранящихся в коллекции
     */
    size_t m_count;

public:
    /**
     * @brief Конструктор по умолчанию. Создает пустой вектор
     */
    Vector();

    /**
     * @brief Конструктор со списком инициализации
     * @param items Список элементов для инициализации
     */
    Vector(const std::initializer_list<int> items);

    /**
     * @brief Конструктор копирования. Создает глубокую копию другого вектора
     * @param other Ссылка на копируемый объект Vector
     */
    Vector(const Vector &other);

    /**
     * @brief Конструктор перемещения. Переносит ресурсы из другого вектора
     * @param other Временный объект Vector (rvalue ссылка)
     */
    Vector(Vector &&other);

    /**
     * @brief Деструктор класса. Освобождает выделенную динамическую память
     */
    ~Vector();

    /**
     * @brief Возвращает строковое представление содержимого коллекции
     * @return Строка со всеми элементами вектора, разделенными пробелами
     */
    std::string to_string() const;

    /**
     * @brief Возвращает текущее количество элементов в векторе
     * @return Текущий размер коллекции
     */
    size_t get_size() const;

    /**
     * @brief Проверяет коллекцию на пустоту
     * @return true, если в векторе нет элементов, иначе false
     */
    bool is_empty() const;

    /**
     * @brief Вставка элемента по заданному индексу со сдвигом остальных элементов
     * @param index Позиция/индекс, куда нужно вставить элемент
     * @param value Новое целочисленное значение для вставки
     */
    void insertAt(size_t index, const int value);

    /**
     * @brief Удаление элемента по заданному индексу со сдвигом остальных элементов.
     * @param index Позиция/индекс удаляемого элемента
     */
    void removeAt(const size_t index);

    /**
     * @brief Поиск элемента в коллекции по значению
     * @param value Искомое целочисленное значение
     * @return Индекс первого вхождения элемента или -1, если элемент не найден
     */
    int indexOf(const int value) const;

    /**
     * @brief Оператор присваивания
     * @param other Ссылка на копируемый вектор
     * @return Ссылка на текущий объект
     */
    Vector &operator=(const Vector &other);

    /**
     * @brief Оператор присваивания
     * @param other Временный перемещаемый вектор
     * @return Vector& Ссылка на текущий объект
     */
    Vector &operator=(Vector &&other);

    /**
     * @brief Перегрузка оператора индексации для изменения или чтения элемента
     * @param index Индекс запрашиваемого элемента
     * @return int& Ссылка на элемент по указанному индексу
     */
    int &operator[](const size_t index);

    /**
     * @brief Перегрузка оператора индексации для чтения элемента
     * @param index Индекс запрашиваемого элемента
     * @return const int& Константная ссылка на элемент по указанному индексу
     */
    const int &operator[](const size_t index) const;

    /**
     * @brief Перегрузка оператора сдвига влево
     * @param os Выходной поток данных
     * @param vec Объект вектора для вывода
     * @return std::ostream& Ссылка на выходной поток данных
     */
    friend std::ostream &operator<<(std::ostream &os, const Vector &vec);
};
