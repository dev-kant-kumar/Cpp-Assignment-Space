// 8. Write a C++ program to check overflow / underflow during various arithmetic operations.

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int max_int = INT_MAX;
    int min_int = INT_MIN;

    // Addition
    cout << "Case of Overflow : Adding 1 to max limit of int \n";
    cout << "Addition: " << max_int + 1 << endl; // Overflow

    cout << "Case of Underflow : Taking 1 out from min limit of int \n";
    cout << "Subtraction: " << min_int - 1 << endl; // Underflow

    return 0;
}