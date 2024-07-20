// 24. Write a program in C++ to convert temperature in Kelvin to Fahrenheit.

#include <iostream>

using namespace std;

int main()
{
    double kelvin;

    cout << "Enter temperature in Kelvin: ";
    cin >> kelvin;

    double fahrenheit = (kelvin - 273.15) * 9 / 5 + 32;

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}