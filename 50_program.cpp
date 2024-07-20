// 50. Write a C++ program to enter length in centimeters and convert it into meters and kilometers.

#include <iostream>

using namespace std;

int main()
{
    double centimeters;

    cout << "Enter length in centimeters: ";
    cin >> centimeters;

    double meters = centimeters / 100;
    double kilometers = meters / 1000;

    cout << "Length in meters: " << meters << endl;
    cout << "Length in kilometers: " << kilometers << endl;

    return 0;
}