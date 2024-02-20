#include <iostream>

int nPlusOne(int n) {
	return n + 1;
}

void printNPlusOne(int n) {
	std::cout << "N plus one is ";
	switch (nPlusOne(n)) {
		case 1:
		std::cout << "one.\n";
		return;
		case 2:
		std::cout << "two.\n";
		return;
		case 3:
		std::cout << "three.\n";
		return;
		default:
		std::cout << "greater than three.\n";
		return;
	}
}

int main() {
	int n{-1};
	while (n < 0 || 255 < n) {
	std::cout << "Enter a number [0-255]: ";
	std::cin >> n;
	}

	std::cout << (0 <= n);
	printNPlusOne(n);
	return 0;
}
