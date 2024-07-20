// 16. Write a C++ program that calculates the volume of a cylinder.

#include <iostream>
#include <cmath>

float volume_of_cylinder(int radius, int height);
using namespace std;

int main()
{
    double radius, height;
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    cout << "The volume of the cylinder is: " << volume_of_cylinder(radius, height) << endl;
    return 0;
}

float volume_of_cylinder(int radius, int height)
{
    return 3.14 * pow(radius, 2) * height;
}