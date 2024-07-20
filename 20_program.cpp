// 20. Write a C++ program to convert temperature in Celsius to Fahrenheit.

#include <iostream>
using namespace std;
int main()
{
    double celsius, fahrenheit;
    cout << "This C++ program convert temperature in Celsius to Fahrenheit \n\n";

    cout << "Enter temperature in degree celsius: ";
    cin >> celsius;

    // converting celsius to Fahrenheit
    fahrenheit = (double)((celsius * 9) / 5) + 32;
    cout << "Temperature in degree fahrenheit: " << fahrenheit << endl;

    return 0;
}