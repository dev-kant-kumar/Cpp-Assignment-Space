// 6. Write a C++ program that checks whether primitive values cross the limit.

#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;

int main()
{
    // Limits for integral types
    cout << "Range of integral types\n\n";
    cout << "char min: \n" << CHAR_MIN ;
    cout << "char max: \n" << CHAR_MAX ;
    cout << "signed char min: \n" << SCHAR_MIN ;
    cout << "signed char max: \n" << SCHAR_MAX ;
    cout << "unsigned char max: \n" << UCHAR_MAX ;

    cout << "short min: \n" << SHRT_MIN ;
    cout << "short max: \n" << SHRT_MAX ;
    cout << "unsigned short max: \n" << USHRT_MAX << endl;

    cout << "int min: \n" << INT_MIN ;
    cout << "int max: \n" << INT_MAX ;
    cout << "unsigned int max: \n" << UINT_MAX ;

    cout << "long min: " << LONG_MIN << ", max: " << LONG_MAX << endl;
    cout << "unsigned long max: " << ULONG_MAX << endl;

    cout << "long long min: " << LLONG_MIN << ", max: " << LLONG_MAX << endl;
    cout << "unsigned long long max: " << ULLONG_MAX << endl;

    // Limits for floating-point types
    cout << "\nRange of floating-point types\n\n";
    cout << "float min: " << FLT_MIN << ", max: " << FLT_MAX << endl;
    cout << "double min: " << DBL_MIN << ", max: " << DBL_MAX << endl;
    cout << "long double min: " << LDBL_MIN << ", max: " << LDBL_MAX << endl;
    return 0;
}
