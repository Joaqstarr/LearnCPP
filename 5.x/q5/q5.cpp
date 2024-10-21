#include <string>
#include <string_view>
#include <iostream>

std::string GetName(int num){
    std::cout << "Enter the name of person #"<<num<<": ";
    std::string name{};
    std::getline(std::cin  >> std::ws, name);

    return name;
}

int GetAge(std::string_view name){
    int res = -1;
    while(res < 0){
        std::cout << "Enter the age of "<<name<<": ";
        std::cin >>res;
    }
    return res;
}

void PrintOlder(std::string_view p1, int p1Age, std::string_view p2, int p2Age){
    std::string_view oldest{};
    int oldestAge{};
    std::string_view youngest{};
    int youngestAge{};

    if(p1Age > p2Age){
        oldestAge = p1Age;
        oldest = p1;
        youngestAge = p2Age;
        youngest = p2;
    }else if(p1Age < p2Age)
    {
        oldestAge = p2Age;
        oldest = p2;
        youngestAge = p1Age;
        youngest = p1;
    }else{
        std::cout << p1 << " and " << p2 << " are the same age\n";
        return;
    }

     std::cout << oldest << " (age " << oldestAge << ") is older than " << youngest << " (age " << youngestAge << ")\n";
}

int main(){
    std::string p1Name{GetName(1)};
    int p1Age{GetAge(p1Name)};
    std::string p2Name{GetName(2)};
    int p2Age{GetAge(p2Name)};
    
    
    PrintOlder(p1Name, p1Age, p2Name, p2Age);

    return 0;
}