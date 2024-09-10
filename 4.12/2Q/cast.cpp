#include <iostream>

int main(){
    char input{};
    std::cout << "Enter a single character:";
    std::cin >> input;

    int asNum{input};
    std::cout << "You entered " << input << ", which has ASCII code " << asNum << '\n';
    return 0;
}