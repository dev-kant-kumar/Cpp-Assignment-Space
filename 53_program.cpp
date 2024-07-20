// 53. Write a C++ program to calculate the area of an equilateral triangle

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double length_of_side, area;
    cout << "Enter the side of the equilateral triangle : ";
    cin >> length_of_side;

    // calculating the area of the triangle
    area = (sqrt(3) / 4) * (length_of_side * length_of_side);
    cout << "The area of the equilateral triangle is : " << area << endl;

    return 0;
}