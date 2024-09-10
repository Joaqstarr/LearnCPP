#include <iostream>

int main(){
    char input{};
    std::cout << "Enter a single character:";
    std::cin >> input;

    std::cout << "You entered " << input << ", which has ASCII code " << static_cast<int>(input) << '\n';
    return 0;
}