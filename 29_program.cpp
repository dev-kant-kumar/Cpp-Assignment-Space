// 29. Write a C++ program to compute the quotient and remainder.

#include <iostream>
using namespace std;

int main()
{
    int dividend, divisor, quotient, remainder;

    cout << "Enter the dividend: ";
    cin >> dividend;

    cout << "Enter the divisor: ";
    cin >> divisor;

    cout << "Quotient: " << dividend / divisor << endl;
    cout << "Remainder: " << dividend % divisor << endl;

    return 0;
}