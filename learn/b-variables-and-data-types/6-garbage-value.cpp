#include <iostream>

// Garbage value demonstration
int main() {
    int uninitializedVariable; // Variable declared but not initialized
    std::cout << "The value of the uninitialized variable is: " << uninitializedVariable << std::endl;
    return 0;
}
