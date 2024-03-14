#include <iostream>

int main() {
  std::cout << "Please, insert an integer: ";

  int i{};
  std::cin >> i;

  std::cout << "Double " << i << " is: " << i * 2 << '\n';
  std::cout << "Triple " << i << " is: " << i * 3 << '\n';

  return 0;
}
