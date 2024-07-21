// 55. Write a C++ program to enter P, T, R and calculate compound interest.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double A, P, T, R, CI;

    cout << "Enter the principal amount (P): ";
    cin >> P;

    cout << "Enter the time period (T) in years: ";
    cin >> T;

    cout << "Enter the annual interest rate (R) in percentage: ";
    cin >> R;

    A = P * pow((1 + (double)R / 100), T); // Calculate the amount after T years

    CI = A - P; // Calculate the compound interest

    cout << "Amount of interest : " << A << endl;

    cout << "The compound interest is: " << CI << endl;

    return 0;
}