#include <iostream>  // for std::cout and std::cin


//ASks a user to input 3 numbers, then prints them.
int main()
{
    std::cout << "Enter a number: "; // ask user for a number

    int x{}; 
    int y{}; 
    int z{}; 

       // define variable x to hold user input (and value-initialize it)
    std::cin >> x >> y >> z; // get number from keyboard and store it in variable x

    std::cout << "You entered " << x << ", " << y << ", and " << z << ".\n";
    return 0;
}
