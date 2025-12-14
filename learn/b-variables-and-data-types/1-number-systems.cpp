#include <iostream>
#include <string>
#include <bitset>

int main() {

    // We can represent numbers in different number systems in C++
    int decimalNumber = 42;          // Decimal (base 10)
    int binaryNumber = 0b101010;     // Binary (base 2)
    int octalNumber = 052;           // Octal (base 8)
    int hexadecimalNumber = 0x2A;    // Hexadecimal (base 16)

    // Output the numbers in different formats
    std::cout << "Decimal of " << decimalNumber << " is " << decimalNumber << std::endl;
    std::cout << "Binary of " << binaryNumber << " is " << std::bitset<8>(binaryNumber) << std::endl;
    std::cout << "Octal of " << octalNumber << " is " << std::oct << octalNumber << std::endl;
    std::cout << "Hexadecimal of " << hexadecimalNumber << " is " << std::hex << hexadecimalNumber << std::endl;

    return 0;
}
