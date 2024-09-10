#include <iostream>

double GetValueFromUser();
char GetOperationFromUser();
void ApplyCalculation(double in1, double in2, char operation);

int main(){
    double input1{GetValueFromUser()};
    double input2{GetValueFromUser()};

    char operation {GetOperationFromUser()};

    ApplyCalculation(input1, input2, operation);
    return 0;
}

double GetValueFromUser(){
    std::cout << "Enter a double value: ";
    double input{};
    std::cin >> input;
    return input;
}

char GetOperationFromUser(){
    std::cout << "Enter +, -, *, or /: ";
    char input {};
    std::cin >> input;
    return input;
}


double Add(double in1, double in2){
    return in1 + in2;
}
double Subtract(double in1, double in2){
    return in1 - in2;
}
double Multiply(double in1, double in2){
    return in1 * in2;
}
double Divide(double in1, double in2){
    return in1 / in2;
}
void PrintBeginning(double in1, double in2, char operation){
    std::cout << in1 << ' ' << operation << ' ' << in2 << " is ";
}

void ApplyCalculation(double in1, double in2, char operation){
    switch (operation){
        case '+':
            PrintBeginning(in1, in2, operation);
            std::cout << Add(in1, in2) << "\n";
            break;
        case '-':
            PrintBeginning(in1, in2, operation);
            std::cout << Subtract(in1, in2) << "\n";
            break;
        case '*':
            PrintBeginning(in1, in2, operation);
            std::cout << Multiply(in1, in2) << "\n";
            break;
        case '/':
            PrintBeginning(in1, in2, operation);
            std::cout << Divide(in1, in2) << "\n";
            break;  
            
    }
}
