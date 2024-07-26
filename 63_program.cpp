// 63. Write a C++ program that prints the three highest numbers from a list of numbers in descending order.

#include <iostream>
using namespace std;

int main()
{
    int numbers_in_list;
    cout << "\033[1;43mThis c++ program prints the three highest numbers from a list of numbers in descending order.\n\n";
    cout << "\033[34m\n Enter the values asked below\n\033[0m";
    cout << "\033[1mEnter the no of numbers in list : ";
    cin >> numbers_in_list;

    int list_of_no[numbers_in_list];

    // taking the numbers from the user
    for (int i = 0; i < numbers_in_list; i++)
    {
        cout << "Enter the number " << i + 1 << " : ";
        cin >> list_of_no[i];
    }

    // checking for three hightest numbers in the list
    int firstNum, secondNum, thirdNum, firstNum_from_list = list_of_no[0];

    for (int i = 0; i < numbers_in_list; i++)
    {
        if (list_of_no[i + 1] > firstNum_from_list)
        {
            firstNum = list_of_no[i];
        }
    }
}