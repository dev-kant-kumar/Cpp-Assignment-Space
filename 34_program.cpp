// 34. Write a C++ program to display the current date and time.

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t currentTime = time(0);
    struct tm *localTime = localtime(&currentTime);

    cout << "Current date and time: " << asctime(localTime) << endl;

    return 0;
}