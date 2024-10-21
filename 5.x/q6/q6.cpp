#include <iostream>
#include <string_view>

// Write the function getQuantityPhrase() here
constexpr std::string_view getQuantityPhrase(int appleCount){
    if(appleCount > 3)
        return "many";
    else if(appleCount == 3)
        return "a few";
    else if(appleCount == 2)
        return "a couple of";
    else if(appleCount == 1)
        return "a single";
    else if(appleCount == 0)
        return "no";
    else 
        return "negative";

}

// Write the function getApplesPluralized() here
constexpr std::string_view getApplesPluralized(int appleCount){
    return (appleCount == 1)? "apple" : "apples";
}

int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}