#include <iostream>

int main() {
  std::cout << "Enter a character: ";
  char ch{};
  std::cin >> ch;
  std::cout << "You entered " << ch << ", which ASCII code is "
  << static_cast<int>(ch) << '\n';
  return 0;
}
