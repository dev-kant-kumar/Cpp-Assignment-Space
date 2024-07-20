// 9. Write a C++ program to display the operation of pre and post increment and decrement.
#include <iostream>
using namespace std;

int main()
{
    int num = 10, num1 = 10;

    cout << "Post Increment: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }

    cout << "Post Decrement: " << endl;
    while (num <= 10)
    {
        cout << num << endl;
        num--;
    }

    cout << "Pre Increment: " << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << i << endl;
    }

    cout << "Pre Decrement: " << endl;
    while (num1 <= 10)
    {
        cout << num << endl;
        --num;
    }
    return 0;
}