// 23. Write a program in C++ that converts kilometers per hour to miles per hour.

#include <iostream>
using namespace std;
int main()
{
    double kilometersPerHour, milesPerHour;

    cout << "Enter the speed in kilometers per hour: ";
    cin >> kilometersPerHour;

    milesPerHour = kilometersPerHour * 0.621371; // Conversion factor

    cout << "The speed in miles per hour is: " << milesPerHour << endl;

    return 0;
}