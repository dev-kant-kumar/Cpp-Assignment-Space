// 12. Write a C++ program to add two numbers and accept them from the keyboard.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Sum of " << num1 << " and " << num2 << " is: " << num1 + num2 << endl;

    return 0;
}