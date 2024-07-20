// 54. Write a C++ program to enter P, T, R and calculate Simple Interest.

#include <iostream>

using namespace std;

int main() {
    double P, T, R, SI;

    cout << "Enter Principal (P): ";
    cin >> P;

    cout << "Enter Time (T): ";
    cin >> T;

    cout << "Enter Rate (R): ";
    cin >> R;

    SI = (P * T * R) / 100;

    cout << "Simple Interest = " << SI << endl;

    return 0;
}