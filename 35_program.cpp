// 35. Write a program in C++ to compute the specified expressions and print the output.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1 = 5, num2 = 10;

    // Addition
    cout << "Addition: " << num1 + num2 << endl;

    // Subtraction
    cout << "Subtraction: " << num1 - num2 << endl;

    // Multiplication
    cout << "Multiplication: " << num1 * num2 << endl;

    // Division
    cout << "Division: " << (float)(num1) / num2 << endl;

    // Modulus
    cout << "Modulus: " << num1 % num2 << endl;

    // Exponentiation
    cout << "Exponentiation: " << pow(num1, num2) << endl;

    return 0;
}