// 5. Write a C++ program to check the upper and lower limits of integers.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    signed int bits = sizeof(int) * 8;
    signed int range_signed = pow(2, bits - 1);
    signed int max_signed_int = range_signed - 1;
    signed int min_signed_int = -range_signed;

    unsigned int range_unsigned = pow(2, bits);
    unsigned int max_unsigned_int = range_unsigned - 1;
    unsigned int min_unsigned_int = 0;

    cout << "size of integer are following based on : " << sizeof(int) << " bytes" << endl;

    cout << "Lower Limit of signed integer: " << min_signed_int << endl;
    cout << "Upper Limit of signed integer: " << max_signed_int << endl;
    cout << "Lower Limit of unsigned integer: " << min_unsigned_int << endl;
    cout << "Upper Limit of unsigned integer: " << max_unsigned_int << endl;

    return 0;
}