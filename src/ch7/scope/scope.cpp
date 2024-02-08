#include <iostream>

int main() {
	int x{ 9 };
	std::cout << x << '\n';
	{
		int x { 1 };
		std::cout << x << '\n';
	}
	std::cout << x << '\n';
	return 0;
}
