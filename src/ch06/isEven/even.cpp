#include <iostream>

constexpr bool isEven(int n) { return !(n % 2); }

int main() {
  std::cout << "Enter an integer: ";
  int n{};
  std::cin >> n;

  if (isEven(n))
    std::cout << n << " is even\n";
  else
    std::cout << n << " is odd\n";
  return 0;
}
