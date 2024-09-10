/*
distance fallen = gravity_constant * x_seconds2 / 2

Enter the height of the tower in meters: 100
At 0 seconds, the ball is at height: 100 meters
At 1 seconds, the ball is at height: 95.1 meters
At 2 seconds, the ball is at height: 80.4 meters
At 3 seconds, the ball is at height: 55.9 meters
At 4 seconds, the ball is at height: 21.6 meters
At 5 seconds, the ball is on the ground.
*/

#include <iostream>
#include <algorithm>

const double gravity = 9.8;

void PrintBallHeightAtSeconds(double startingHeight, int seconds); 

int main(){
    double height {};

    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> height;

    PrintBallHeightAtSeconds(height, 0);
    PrintBallHeightAtSeconds(height, 1);
    PrintBallHeightAtSeconds(height, 2);
    PrintBallHeightAtSeconds(height, 3);
    PrintBallHeightAtSeconds(height, 4);
    PrintBallHeightAtSeconds(height, 5);
    return 0;
}



double GetDistanceTraveled(int seconds){
    return gravity * (seconds*seconds)/2;
}

double GetBallHeight(double startingHeight, int seconds){
    return std::max(0.0, startingHeight - GetDistanceTraveled(seconds));
}

void PrintBallHeightAtSeconds(double startingHeight, int seconds){
    double height = GetBallHeight(startingHeight, seconds);

    if(height > 0)
        std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
    else
        std::cout << "At " << seconds << "  seconds, the ball is on the ground\n";

}

