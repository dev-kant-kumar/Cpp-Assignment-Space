// 26. Write a program in C++ to convert temperature in Fahrenheit to Kelvin.

#include <iostream>

using namespace std;

double fahrenheitToKelvin(double fahrenheit);

int main()
{
    double fahrenheit, kelvin;

    cout << "Enter temperature in fahrenheit: ";
    cin >> fahrenheit;
    cout << "Temperature in kelvin: " << fahrenheitToKelvin(fahrenheit) << endl;
    return 0;
}

double fahrenheitToKelvin(double fahrenheit)
{
    return (fahrenheit - 32) * 5.0 / 9.0 + 273.15;
}