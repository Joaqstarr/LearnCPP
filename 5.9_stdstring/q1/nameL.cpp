#include <iostream>
#include <string>

int main(){
    std::string name {};
    int age{};
    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws, name);
    std::cout << "Enter your age: ";
    std::cin >> age;

    int lengthCalc {age + static_cast<int>(name.length())};
    std::cout << "Your age + length of name is " << lengthCalc << "\n";

    return 0;
}