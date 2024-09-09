#include <iostream>

bool IsPrime(int num);

int main(){
    int input{};
    std::cin >> input;

    if(IsPrime(input)){
        std::cout << input << " is a prime number \n";
    }else{
        std::cout << input << " is not a prime number \n";

    }


    return 0;
}

bool IsPrime(int num){
    if(num == 2)
        return true;
    if(num == 3)
        return true;
    if(num == 5)
        return true;
    if(num == 7)
        return true;

    return false;
}