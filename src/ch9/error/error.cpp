#include <iostream> 

void divide(int x, int y) {
	if (y == 0) {
		std::cout << "Can not divide by zero!\n";
		std::exit(1);
	}
	std::cout << static_cast<double>(x) / y << '\n';
}

int main() {
	divide(3, 2);
	divide(2, 0);
	return 12;
}
