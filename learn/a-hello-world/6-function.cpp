#include <iostream>

/*
    Sum is a function that sum two integers and returns the result.
*/
int sum(int first_number, int second_number) {
    int result = first_number + second_number;
    std::cout << "The sum of " << first_number << " and " << second_number << " is " << result << "." << std::endl;
    return result;
}

int main() {
    // Call the sum function and store the result
    int total = sum(100, 25);
    total = sum(total, 25);
    total = sum(total, 25);
    total = sum(total, 25);
    return 0;
}
