#include <iostream>

// Get tower height from user
double getTowerHeight() {
	std::cout << "Enter the height of the tower in meters: ";
	double towerHeight{};
	std::cin >> towerHeight;
	return towerHeight;
}
