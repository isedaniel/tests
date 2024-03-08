#include <iostream>

int main() {
	char c{};
	std::cout << "Enter char: ";
	std::cin >> c;
	std::cout << double(c) << '\n';
	return 0;
}
