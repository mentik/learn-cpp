#include <iostream>
using namespace std;

/*
    This program demonstrates a simple arithmetic operation using statements in C++.
    It calculates the sum of two integers and prints the result to the console.
*/
int main() {
    // Different ways to initialize variables
    int firstNumber {15};  // Uniform initialization
    int secondNumber = 25; // Copy initialization
    int sum = firstNumber + secondNumber;
    cout << "The sum of " << firstNumber << " and " << secondNumber << " is " << sum << "." << endl;
    return 0;
}
