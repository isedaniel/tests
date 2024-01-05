#include <iostream>

double getHeight() {
	std::cout << "Enter the height of the tower in meters: ";
	double height{};
	std::cin >> height;
	return height;
}

int main() {
	double height{getHeight()};
	std::cout << "You entered " << height << " meters.\n";
	return 0;
}
