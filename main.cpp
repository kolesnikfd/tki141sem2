#include <iostream>
#include <string>
#include <cstdlib>
#include "vector.h"
using namespace std;
/**
 * @brief Нумерация объектов выбора
 */
enum Actions
{INSERT = 1,REMOVE,SEARCH};
/**
 * @brief Выводит ошибку и завершает работу программы
 * @param text - текст, выводимый на экран
 */
void ERROR(const string text)
{
    cerr << text << endl;
    exit(1);
}
/**
 * @brief Считывает значение, введенное с клавиатуры
 * @return считанное значение
 */
int get_choice()
{
    int number = 0;
    cin >> number;
    if (cin.fail())
    {
        ERROR("Input error");
    }
    return number;
}
/**
 * @brief Точка входа в программу
 * @return Если программа выполнена корректно - 0, иначе 1
 */
int main()
{
    Vector collection;
    cout << "Specify the initial number of elements of the vector: ";
    int n = get_choice();
    if (n < 0)
    {
        ERROR("Error: The number of elements cannot be negative.");
    }
    if (n > 0)
    {
        cout << "Enter " << n << " vector elements (separated by space or Enter): " << endl;
        for (size_t i = 0; i < static_cast<size_t>(n); ++i)
        {
            int val = get_choice();
            collection.insertAt(collection.get_size(), val);
        }
    }
    cout << "Primordial vector: " << collection << endl;
    cout << "Select an action with a vector: " << endl
         << INSERT << " - Insert element" << endl
         << REMOVE << " - Remove element" << endl
         << SEARCH << " - Find element" << endl;
    cout << "Your choice: ";
    int choice = get_choice();
    try
    {
        switch (choice)
        {
        case INSERT:
        {
            cout << "Enter index to insert: ";
            int raw_index = get_choice();
            if (raw_index < 0)
                ERROR("Error: index cannot be negative.");
            cout << "Enter the value to insert: ";
            int val = get_choice();
            collection.insertAt(static_cast<size_t>(raw_index), val);
            cout << "After adding: " << collection << endl;
            break;
        }
        case REMOVE:
        {
            cout << "Enter index to delete: ";
            int raw_index = get_choice();
            if (raw_index < 0)
                ERROR("Error: index cannot be negative.");
            collection.removeAt(static_cast<size_t>(raw_index));
            cout << "After removal: " << collection << endl;
            break;
        }
        case SEARCH:
        {
            cout << "Enter a number to search: ";
            int val = get_choice();
            int pos = collection.indexOf(val);
            if (pos != -1)
            {
                cout << "Element found at index: " << pos << endl;
            }
            else
            {
                cout << "Element is missing from vector." << endl;
            }
            break;
        }
        default:
            ERROR("Error: Invalid menu item selection.");
        }
    }
    catch (const exception &e)
    {
        cout << "Error! " << e.what() << endl;
    }
    if (!collection.is_empty())
    {
        cout << endl
             << "The first element is: " << collection[0] << endl;
    }
    return 0;
}
