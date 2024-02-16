#include <iostream>

int acc(int n) {
  static int total{};
  total += n;
  return total;
}

int main() {
  std::cout << acc(4) << '\n';  // prints 4
  std::cout << acc(3) << '\n';  // prints 7
  std::cout << acc(2) << '\n';  // prints 9
  std::cout << acc(1) << '\n';  // prints 10
  return 0;
}
