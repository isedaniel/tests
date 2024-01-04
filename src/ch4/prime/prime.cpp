#include <iostream>

bool isPrime(int n) {
	if (n < 2)
		return false;

	for (int i=2; i<n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

bool isInRange(int n) {
	return (0 <= n && n <= 9);
}

int main() {
	std::cout << "Enter a number between 0 and 9: ";
	
	int n{};
	std::cin >> n;

	if (!isInRange(n)) {
		std::cout << "Number has to be between 0 and 9!\n";
		return 1;
	}

	if (isPrime(n))
		std::cout << "Number is prime\n";
	else
		 std::cout << "Number is not prime\n";

	return 0;
}
