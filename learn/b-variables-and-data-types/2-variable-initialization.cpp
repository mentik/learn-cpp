#include <iostream>

int main() {
    // Brace initialization, better type safety, narrowing conversions are not allowed.
    int a{10};
    std::cout << "Brace initialized a: " << a << std::endl;

    // Copy initialization, traditional way and less safe.
    int b = 20;
    std::cout << "Copy initialized b: " << b << std::endl;

    // Assignment initialization
    int c;
    c = 30;
    std::cout << "Assignment initialized c: " << c << std::endl;

    // Functional initialization
    int d(40);
    std::cout << "Functional initialized d: " << d << std::endl;

    // narrowing conversion example
    int e;
    e = 2.9; // double to int, fractional part truncated
    std::cout << "Narrowing conversion e (from 2.9 to int): " << e << std::endl;

    return 0;

}