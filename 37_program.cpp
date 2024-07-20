// 37. Write a C++ program to print a mystery series from 1 to 50.

#include <iostream>

int main() {
    int i = 1;

    while (i <= 50) {
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "FizzBuzz ";
        } else if (i % 3 == 0) {
            std::cout << "Fizz ";
        } else if (i % 5 == 0) {
            std::cout << "Buzz ";
        } else {
            std::cout << i << " ";
        }

        i++;
    }

    return 0;
}