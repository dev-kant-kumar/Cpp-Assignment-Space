// 44. Write a C++ program to get the volume of a sphere with radius 6.

#include <iostream>
#include <cmath>
using namespace std;
float volume_of_sphere(int radius);
int main()
{
    int radius;
    cout << "The volume of the sphere is: " << volume_of_sphere(6) << endl;

    return 0;
}

float volume_of_sphere(int radius)
{

    const float PI = 3.14;
    float division = (float)4 / 3;
    float volume = division * PI * pow(radius, 3);
    return volume;
}
