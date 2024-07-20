// 43. Write a C++ program that accepts the radius of a circle from the user and computes the area and circumference.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle : " << (double)3.14 * pow(radius, 2) << endl;
    cout << "Circumference of the circle :" << (double)2 * 3.14 * radius << endl;
    return 0;
}