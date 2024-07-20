// 52. Write a C++ program to enter two angles of a triangle and find the third angle.

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int angleA, angleB, angleC;
a:
    cout << "\033[1;43m\nThis C++ program help to find the third angle(degree) of a triangle \033[0m\n\n";
    cout << "\033[36mEnter the angles of the triangle as asked below \033[0m\n";
    cout << "\033[1mEnter angle A: \033[0m";
    cin >> angleA;
    cout << "\033[1mEnter angle B: \033[0m";
    cin >> angleB;

    if (angleA > 0 && angleA < 180 && angleB > 0 && angleB < 180)
    {
        if (angleA + angleB < 180)
        {

            cout << "\033[1;32m\nThird angle of the triangle with angle A : " << angleA << " and angle B : " << angleB << " = " << 180 - (angleA + angleB) << " degree\033[0m\n\n";
        }
        else
        {
            cout << "\033[4;31m\nInvalid input! Please enter valid angles sum of two angle must be less than 180\033[0m\n\n";
            Beep(1000, 100);
            goto a;
        }
    }
    else
    {
        cout << "\033[4;31m\nInvalid input! Please enter valid angles between 0 and 180 degree.\033[0m\n\n";
        Beep(1000, 100);
        goto a;
    }
    return 0;
}