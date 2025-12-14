#include <iostream>

int main() {
    // narrowing conversion example
    int e;
    e = 2.9; // double to int, fractional part truncated
    std::cout << "Narrowing conversion e (from 2.9 to int): " << e << std::endl;

    return 0;
}