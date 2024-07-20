// 48. Write a C++ program that swaps two variables without using a third variable.

#include <iostream>
using namespace std;
void swapWithoutThirdVariable(int &a, int &b);

int main()
{
    int x = 5, y = 10;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swapWithoutThirdVariable(x, y);
    return 0;
}

void swapWithoutThirdVariable(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping: x = " << a << ", y = " << b << endl;
}