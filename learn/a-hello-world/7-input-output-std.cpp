#include <iostream>
/*
    << Write to standard streams output
    >> Read from standard streams input
    cout: standard output stream
    cin: standard input stream
    cerr: standard error stream (unbuffered)
    clog: standard log stream (buffered)
    getline: function to read a full line of text including spaces
    ws: manipulator to ignore leading whitespace
*/
int main() {
    std::cout << "Please enter your name: ";
    std::string name;
    std::getline(std::cin >> std::ws, name); // Read a full line including leading whitespace
    std::cout << "Hello, " << name << "! Welcome to C++ programming." << std::endl;
    
    std::cout << "Please enter your city: ";
    std::string city;
    std::getline(std::cin >> std::ws, city); // Read a full line including leading whitespace
    std::cout << "You live in " << city << "." << std::endl;
    
    std::cerr << "Let's learn together!" << std::endl;
    std::clog << "User " << name << " from " << city << " has started the program." << std::endl;
    return 0;
}
