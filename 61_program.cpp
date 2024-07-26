// 61. Write a C++ program to swap the first and last digits of any number.

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char number[100];

    cout << "\033[1;43m\nThis c++ program helps to swap the first and last digits of any number \033[0m\n\n";
    cout << "\033[1mEnter the number : \033[0m";
    cin >> number;
    char originalNum[strlen(number)];
    strcpy(originalNum, number);

    // swapping the first and last digits of any number
    int maxLength = strlen(number);
    int firstNum = number[0];
    int lastNum = number[maxLength - 1];
    number[0] = lastNum;
    number[maxLength - 1] = firstNum;

    cout << "After swapping first and last digit of : " << originalNum << "the num is : " << number << "\n\n";

    return 0;
}
