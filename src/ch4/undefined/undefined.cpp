#include <iostream>

int main() {
	int x{ 2'147'483'647 };
	std::cout << x << '\n';
	// int overflow
	std::cout << (x+1) << '\n';
	return 0;
}
