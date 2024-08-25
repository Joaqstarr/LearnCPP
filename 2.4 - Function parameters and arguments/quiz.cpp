#include <iostream>




int GetValueFromUser(){
    std::cout << "Enter a number: ";
    int num{};

    std::cin >> num;

    return num;
}

int doubleNumber(int num){
    return num * 2;
}

int main(){
    std::cout << doubleNumber(GetValueFromUser()) << '\n';

    return 0;
}