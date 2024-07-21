// 58. Write a C++ program to print the area of a polygon.

// To find the area of a regular polygon, you can use the formula : A = 1 / 4(ns ^ 2cot(pi / n))

// where :
// A is the area of the polygon
// n is the number of sides
// s is the length of a side
// cot is the cotangent function
// π is the mathematical constant Pi (approximately 3.14159)

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int no_of_sides;
    double side_length, area;

    cout << "\033[1;43m\nThis c++ program find the area of a regular polygon \033[0m\n\n";
    cout << "\033[34mEnter the asked value to calculate the area of a polygon\033[0m\n";

    cout << "\033[1mEnter the number of sides : \033[0m";
    cin >> no_of_sides;
    cout << "\033[1mEnter the length of the each side : \033[0m";
    cin >> side_length;

    // calculation the value of pi/no_of_sides;
    double pi_divided_by_n = 3.14159 / no_of_sides;
    double cot_of_pi_by_n = 1.0 / (tan(pi_divided_by_n));

    // calculating the area of the polygon
    area = (double)((no_of_sides * pow(side_length, 2) * cot_of_pi_by_n)) / 4;

    cout << "\033[1;32m\nArea of the polygon with no of sides : " << no_of_sides << " and length of each side : " << side_length << " = " << area << "\033[0m\n";

    return 0;
}