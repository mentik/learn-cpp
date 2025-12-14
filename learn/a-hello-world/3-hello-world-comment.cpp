// Header files
// iostream is included to allow input and output operations, like printing to the console.
#include <iostream>

/*
    This is a simple C++ program that prints "Hello, World!" to the console.
    It demonstrates the use of string literals and basic output.
*/
int main() {
    std::string hello = "Hello, World! \nThis is C++20";
    std::cout << hello << std::endl;
    // Why return 0?
    // Returning 0 indicates that the program ended successfully
    // to the operating system.
    return 0;
}

