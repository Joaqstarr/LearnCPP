#include "random.h"
#include <iostream>

int main(){
    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";
    int num {Random::get(0, 100)};

    while(true){
        for(int i = 0; i < 7; i++){
            std::cout << "Guess #" << i << ": ";
            int guess{};
            std::cin >> guess;

            if(guess > num){
                std::cout << "Your guess is too high.\n";
            }else if(guess < num){
                std::cout << "Your guess is too low.\n";
                
            }else{
                std::cout <<"Correct! You win!";
                break;
            }

            if(i >= 7){
                std::cout << "Sorry, you lose. The correct number was " << num << '\n';
            }
        }

        char playAgain {0};
        while(playAgain != 'y' || playAgain != 'n'){
            std::cout << "Would you like to play again (y/n)? ";
            std::cin >>playAgain;
        }

        if(playAgain == 'n')break;
    }

    std::cout << "Thank you for playing.\n";
}