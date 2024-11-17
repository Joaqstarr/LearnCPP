#include <iostream>

int main(){

    char start {'a'};

    while(start <= 'z'){
        std::cout << static_cast<int>(start) << ": " << start << ", ";
        ++start;
        
        if((start - 'a') % 5 == 0)
            std::cout << '\n';
    }


    return 0;
}