#include <bitset>
#include <iostream>

int main() {

	std::bitset<8> bits { 0b0000'0101 };
	std::cout << "All the bits: " << bits << '\n';
	std::cout << "Setting bit in position 3 to 1: ";
	bits.set(3);
	std::cout << bits << '\n';
	std::cout << "Flipping bit in position 4, from 0 to 1: ";
	bits.flip(4);
	std::cout << bits << '\n';
	std::cout << "Resetting bit in pos 4 to 0: ";
	bits.reset(4);
	std::cout << bits << '\n';
	return 0;
}
