#include "io.h"
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