#include <iostream>
#include <cmath>

int readNumber()
{
	std::cout << "Please enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The sum is: " << x << '\n';
}

int main()
{
	// int x { readNumber() };
	// x = x + readNumber();
	// writeAnswer(x);

	double d = pow(2, 5 - 1);
	double min = -d;
	double max = d - 1;
	std::cout << "range = [" << min << ", " << max << "]" << '\n';

	return 0;
}
