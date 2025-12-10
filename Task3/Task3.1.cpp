#include <iostream>
using namespace std;

// <summary>
// Вычисляет площадь трапеции
// </summary>
// <param name="a">Длина первого основания</param>
// <param name="b">Длина второго основания</param>
// <param name="h">Высота трапеции</param>
// <returns>Площадь трапеции</returns>
double trapezoidArea(double a, double b, double h)
{
    return (a + b) * h / 2;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, h;

    cout << "Введите значения:" << endl;

    cout << "a = ";
    cin >> a; // ввод первого основания

    cout << "b = ";
    cin >> b; // ввод второго основания

    cout << "h = ";
    cin >> h; // ввод высоты

    // Вычисление площади трапеции
    double area = trapezoidArea(a, b, h);

    cout << "Площадь трапеции: " << area << endl;

    return 0;
}