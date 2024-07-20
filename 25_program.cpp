// 25. Write a program in C++ to convert temperature in Kelvin to Celsius.

#include <iostream>

using namespace std;

int main()
{
    float kelvin;

    cout << "Enter temperature in Kelvin: ";
    cin >> kelvin;

    float celsius = kelvin - 273.15;

    cout << "Temperature in Celsius: " << celsius << " C" << endl;

    return 0;
}