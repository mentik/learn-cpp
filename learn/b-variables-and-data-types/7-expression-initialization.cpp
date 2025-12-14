#include <iostream>

int main() {
    // Brace expression initialization
    int x{5 + 10}; // x is initialized to 15
    std::cout << "Value of x: " << x << std::endl;

    // Functional expression initialization
    int y(20 * 2); // y is initialized to 40
    std::cout << "Value of y: " << y << std::endl;

    // Copy expression initialization
    int z = 100 / 4; // z is initialized to 25
    std::cout << "Value of z: " << z << std::endl;

    int sum = x + y + z;
    std::cout << "Sum of x, y, and z: " << sum << std::endl;
    
    return 0;
}
