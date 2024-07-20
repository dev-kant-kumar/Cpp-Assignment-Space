// 33. Write a program in C++ to divide two numbers and print them on the screen.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    double quotient = (double)num1 / num2;

    cout << "Quotient: " << quotient << endl;

    return 0;
}