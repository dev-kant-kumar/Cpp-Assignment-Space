// 13. Write a C++ program that swaps two numbers.

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, temp;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Swap numbers using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swapping, the numbers are: " << num1 << " and " << num2 << endl;

    return 0;
}