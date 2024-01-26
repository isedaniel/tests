#include <bitset>
#include <iostream>

int main() {

	std::bitset<8> bits { 0b0000'0101 };
	std::cout << "All the bits: " << bits << '\n';
	return 0;
}
