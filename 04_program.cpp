// 4. Write a program in C++ to print the sum of two numbers using variables.

#include <iostream>
using namespace std;

int main()
{
    int first, second;
    cout << "Enter the first number : ";
    cin >> first;
    cout << "Enter the second number : ";
    cin >> second;

    cout << "Sum of " << first << " and " << second << " is : " << first + second << endl;
    return 0;
}