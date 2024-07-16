// 3. Write a C++ program to find the size of fundamental data types.

#include <iostream>
using namespace std;

int main()
{
    cout << "Size of fundamental data types are as follows: " << endl;
    cout << "char :" << sizeof(char) << "bytes" << endl;
    cout << "int :" << sizeof(int) << "bytes" << endl;
    cout << "long :" << sizeof(long) << "bytes" << endl;
    cout << "float :" << sizeof(float) << "bytes" << endl;
    cout << "double :" << sizeof(double) << "bytes" << endl;

    return 0;
}