// 57. Write a C++ program to print the area of a hexagon.

//  To find the area of a hexagon, you need to know the length of its side. The formula for the area 𝐴
//  of a regular hexagon (a hexagon with all sides and angles equal) with side length 𝑎 is:

// A= 3*sqrt(3)/2*a^2

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double length_of_side, area;

    cout << "Enter the length of a side of the hexagon: ";
    cin >> length_of_side;

    // calculating the area of the hexagon
    area = 3 * (double)sqrt(3) / 2 * pow(length_of_side, 2);

    cout << "The area of the hexagon is: " << area << " square units. " << endl;

    return 0;
}