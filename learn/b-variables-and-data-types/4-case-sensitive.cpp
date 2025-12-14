#include <iostream>

// This program demonstrates different ways to initialize variables in C++.
int main() {
    int number = 10; // 'number' is different from 'Number' due to case sensitivity
    int Number = 20; // 'Number' is a separate variable
    std::cout << "Value of number: " << number << std::endl;
    std::cout << "Value of Number: " << Number << std::endl;
    return 0;
}
