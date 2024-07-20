// 45. Write a C++ program to calculate the volume of a cone.

#include <iostream>
using namespace std;

double calculateVolume(double radius, double height);

int main()
{
    double radius, height;

    cout << "Enter the radius of the cone: ";
    cin >> radius;

    cout << "Enter the height of the cone: ";
    cin >> height;

    cout << "The volume of the cone is: " << calculateVolume(radius, height) << endl;
}

double calculateVolume(double radius, double height)
{
    double volume = (1.0 / 3.0) * 3.14159 * radius * radius * height;
    return volume;
}