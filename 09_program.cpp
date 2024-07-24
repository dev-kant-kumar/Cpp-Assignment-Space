// 9. Write a C++ program to display the operation of pre and post increment and decrement.
#include <iostream>
using namespace std;

int main()
{
    int num = 10, newNum = 0;

    // case of pre increment and decrement

    cout << "\033[1;43m\nThis c++ program show the use of pre and post increment and decrement operation \033[0m\n\n";

    cout << "Value of new Num befor the use of pre increment operation : " << newNum << endl;

    cout << "Values of new Num after use of pre increment operation : " << ++newNum << endl;

    cout << "Value of num before the use of pre decrement operation : " << num << endl;

    cout << "Values of num after use of pre decrement operation : " << --num << endl;

    // case of post increment and decrement
    cout << "\nUse of post increment operation through for loop \n";
    for (int i = 0; i < num; i++)
    {
        cout << "Value of i : " << i << endl;
    }

    cout << "\nUse of post decrement operation through for loop \n";
    while (num > 0)
    {
        cout << "Value of i :" << num << endl;
        num--;
    }

    return 0;
}