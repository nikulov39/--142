#include <iostream>
#include <cmath>
using namespace std;

/**
 * @brief Функция для вычисления значения переменной a по заданным константам.
 * @param x значение константы .
 * @param y значение константы .
 * @param z значение константы .
 * @return Результат вычисления переменной a.
*/

double calculateA(const double x);

/**
 * @brief Функция для вычисления значения переменной b по заданным константам.
 * @param x значение константы .
 * @param z значение константы .
 * @return Результат вычисления переменной b.
*/

double calculateB(const double x, const double y);

/**
* @brief - точка входа в программу
* @return 0 - если программма выполнена корректно, инече - 1
*/

int main()
{
    const double x = 0.335;
    const double y = 0.025;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "a = " << calculateA(x) << endl;
    cout << "b = " << calculateB(x, y) << endl;

    return 0;
}

double calculateA(const double x)
{
    return 1 + x + pow(x, 2) / 2 + pow(x, 3) / 3 + pow(x, 4) / 4;
}


double calculateB(const double x, const double y)
{
    return x * (sin(pow(x, 3)) + cos(pow(y, 2)));
}
