#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
    std::bitset<4> result;
    int size = bits.size();
    for(int i = 0; i < size; ++i){
        if(bits.test(i)){
            result.set((i+1)%size);
        }
        else
        {
            result.reset((i+1)%size);
        }
    }
    return result;
}
std::bitset<4> rotl2(std::bitset<4> bits)
{
    const bool leftBit {bits.test(3)};

    bits <<= 1;

    if(leftBit)
        bits.set(0);

    return bits;
}

std::bitset<4> rotl3(std::bitset<4> bits){
    return (bits << 1) | (bits >> 3);
}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl3(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl3(bits2) << '\n';

	return 0;
}