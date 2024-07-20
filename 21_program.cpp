// 21. Write a C++ program to convert temperature in Fahrenheit to Celsius.

#include <iostream>
using namespace std;
int main()
{
    double celsius, fahrenheit;
    cout << "This C++ program convert temperature in Fahrenheit to Celsius \n\n";

    cout << "Enter temperature in degree fahrenheit: ";
    cin >> fahrenheit;

    // converting celsius to Fahrenheit
    celsius = (fahrenheit - 32) * (double)5 / 9;
    cout << "Temperature in degree celsius: " << celsius << endl;

    return 0;
}