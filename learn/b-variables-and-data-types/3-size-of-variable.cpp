#include <iostream>

int main() {
    int number = 42; 
    std::cout << "Size of int '" << number << "' is " << sizeof(number) << " bytes" << std::endl;

    double decimalNumber = 3.14;
    std::cout << "Size of double '" << decimalNumber << "' is " << sizeof(decimalNumber) << " bytes" << std::endl;

    float floatNumber = 2.71f;
    std::cout << "Size of float '" << floatNumber << "' is " << sizeof(floatNumber) << " bytes" << std::endl;

    char character = 'A';
    std::cout << "Size of char '" << character << "' is " << sizeof(character) << " bytes" << std::endl;

    bool booleanValue = true;
    std::cout << "Size of bool '" << booleanValue << "' is " << sizeof(booleanValue) << " bytes" << std::endl;

    std::string text = "Hello, World!";
    std::cout << "Size of string \"" << text << "\" is " << sizeof(text) << " bytes" << std::endl;
    
    long bigNumber = 123456789012345;
    std::cout << "Size of long long '" << bigNumber << "' is " << sizeof(bigNumber) << " bytes" << std::endl;

    return 0;
}
