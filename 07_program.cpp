// 7. Write a C++ program that displays mixed data types and arithmetic operations.

#include <iostream>
using namespace std;

int main()
{
    int num1 = 89;
    float num2 = 5.9;
    double num3 = 2.3;

    cout << "89+5.9 = " << num1 + num2 << endl;
    cout << "89-5.9 = " << num1 - num2 << endl;
    cout << "89*5.9 = " << num1 * num2 << endl;
    cout << "89/5.9 = " << num1 / num2 << endl;
    cout << "(89+5.9)*(89-2.3) = " << (num1 + num2) * (num1 - num3) << endl;
    return 0;
}
