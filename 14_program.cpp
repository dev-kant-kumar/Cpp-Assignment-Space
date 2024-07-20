// 14. Write a C++ program that calculates the volume of a sphere.

#include <iostream>
#include <cmath>
using namespace std;
float volume_of_sphere(int radius);
int main()
{
    int radius;
    cout << "Enter the radius of the sphere: ";
    cin >> radius;
    cout << "The volume of the sphere is: " << volume_of_sphere(radius) << endl;

    return 0;
}

float volume_of_sphere(int radius)
{

    const float PI = 3.14;
    float division = (float)4 / 3;
    float volume = division * PI * pow(radius, 3);
    return volume;
}
