// 42. Write a C++ program that accepts the user's first and last name and prints them in reverse order with a space between them.

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char firstName[50], lastName[50], fullNameInReverseOrder[100];

    cout << "Enter your first name: ";
    cin.getline(firstName, 50);

    cout << "Enter your last name: ";
    cin.getline(lastName, 50);

    // Reverse the first name and last name
    strcat(lastName, " ");
    strcpy(fullNameInReverseOrder, strcat(lastName, firstName));

    cout << "Your reversed name is : " << fullNameInReverseOrder << endl;

    return 0;
}