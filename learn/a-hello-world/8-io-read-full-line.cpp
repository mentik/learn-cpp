#include <iostream>

int main(){
    std::cout << "Where do you live? ";
    std::string location;
    std::getline(std::cin >> std::ws, location); // Read a full line
    std::cout << "I've heard great things about " << location << ". I'd like to go sometime." << std::endl;
    return 0;
}
