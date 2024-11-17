#include <iostream>

int calculate(int a, int b, char op){
    
    switch(op){
        case '+' :
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        case '%':
            return a % b;
        default:
            std::cout << "Invalid operator entered\n";
            return 0;
    }
}

int main(){
    int a {0};
    int b {0};
    char op{};

    std::cin >> a;
    std::cin >> op;
    std::cin >> b;

    std::cout << "= " << calculate(a, b, op) << '\n';
}