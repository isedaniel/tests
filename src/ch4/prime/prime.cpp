#include <iostream>

bool isPrime(int n) {
	for (int i=2; i<n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	for (int i=2; i<10; i++) {
		std::cout << "Testing " << i << ": ";
		if (isPrime(i)) {
			std::cout << "True\n";
		} else {
      			std::cout << "False\n";
		}
	}
	return 0;
}
