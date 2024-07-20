// 17. Write a C++ program to find the Area and Perimeter of a Rectangle.

#include <iostream>
using namespace std;

int main()
{
    // Get the length and width of the rectangle from the user
    double length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Calculate the area and perimeter of the rectangle
    double area = length * width;
    double perimeter = 2 * (length + width);

    // Display the area and perimeter
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}
