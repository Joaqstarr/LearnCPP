#include <iostream>

int main() {
	int incrementor = 1;
	int person = 0;

	for (int i = 1; i <= 100; i++) {
		if (i % 7 == 0) {
			incrementor *= -1;
		}

		if (i % 11 == 0) {
			person += incrementor;
		}
		person += incrementor;

	}


	int finalCount = person % 10;
	std::cout << "Final Person is " << finalCount;
}