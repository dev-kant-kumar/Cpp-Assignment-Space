// 30. Write a C++ program to compute the total and average of four numbers.

#include <iostream>
using namespace std;

int main()
{
    double num, total = 0;

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        total += num;
    }
    cout << "Total of numbers : " << total << endl;
    cout << "Average of numbers : " << total / 4 << endl;

    return 0;
}