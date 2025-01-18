#include <iostream>

template<typename T>
T add(T a, T b) {
	return a + b;
}

template<typename T>
T mult(T a, int b) {
	return a * b;
}

int main() {
	std::cout << add(1, 2) << std::endl;
	std::cout << mult(1.1, 2) << std::endl;
}