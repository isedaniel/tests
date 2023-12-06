#include <iostream>

int getInt() {
  std::cout << "Enter a number: ";
  int i{};
  std::cin >> i;
  return i;
}

int main() {
  int i = getInt();

  std::cout << "You entered " << i;
  return 0;
}
