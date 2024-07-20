// 40. Write a C++ program to print the area and perimeter of a rectangle.

#include <iostream>

using namespace std;

int main()
{
    double length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    double area = length * width;
    double perimeter = 2 * (length + width);

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}