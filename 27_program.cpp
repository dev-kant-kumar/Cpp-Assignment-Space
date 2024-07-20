// 27. Write a program in C++ to convert temperature in Celsius to Kelvin.

#include <iostream>
using namespace std;

int main()
{
    double celsius, kelvin;
    cout << " Enter temperature in Celsius : ";
    cin >> celsius;

    // Convert Celsius to Kelvin
    kelvin = celsius + 273.15;

    cout << "Temperature in Kelvin : " << kelvin << endl;

    return 0;
}