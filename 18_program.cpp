// 18. Write a C++ program to find the area of any triangle using Heron's formula.

// Heron's formula is used to find the area of a triangle when the length of all the three sides are known.
// the formula is given by :
// A = square root of  (s(s-a)(s-b)(s-c))
// where:
// A= area of the triangle
// a,b,c are the length of the sides of the triangle
// s= semi-perimeter of the triangle
// s=(a+b+c)/2

#include <iostream>
#include <cmath>

using namespace std;
double calArea(double a, double b, double c);

int main()
{
    double a, b, c;
a:
    cout << "\n\nEnter the lengths of three sides of the triangle as asked below \n"
         << endl;
    cout << "Enter the length of side A :";
    cin >> a;

    cout << "Enter the length of side B :";
    cin >> b;

    cout << "Enter the length of side C :";
    cin >> c;

    if (a + b > c && a + c > b && b + c > a)
    {
        calArea(a, b, c);
    }
    else
    {
        cout << "The given sides do not form a valid triangle. Please re-enter the sides." << endl;
        goto a;
    }
    return 0;
}
double calArea(double a, double b, double c)
{
    double s, area;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "The area of the triangle is : " << area << endl;
}