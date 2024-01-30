#include <bitset>
#include <iostream>

std::bitset<4> rotl(std::bitset<4> bits) {
	return 0b0010;
}

int main() {
	// print boolean values for testing
	std::cout << std::boolalpha; 	

	std::bitset<4> bits1 { 0b0001 };
	std::cout << rotl(bits1) << ' ' << (0b0010 == rotl(bits1)) << '\n';
	std::bitset<4> bits2 { 0b1001 };
	std::cout << rotl(bits2) << ' ' << (0b0011 == rotl(bits1)) << '\n';
	return 0;
}
