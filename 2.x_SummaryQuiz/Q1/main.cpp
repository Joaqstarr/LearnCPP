#include <iostream>

int readNumber(){
    std::cout << "Enter a number: ";

    int numGot{};
    std::cin >> numGot;

    return numGot;
}

void writeAnswer(int result){
    std::cout << "The answer is " << result << '\n';
}
int main(){
    int num1 {readNumber()};
    int num2 {readNumber()};

    writeAnswer(num1 + num2);
    return 0;
}