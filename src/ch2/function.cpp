#include <iostream>

int getInt() {
  std::cout << "Enter a number: ";
  int i {};
  std::cin >> i;
  return i;
}

void printDouble(int i) {
  std::cout << "Double " << i << ": " << i*2 << '\n';
}

int main() {
  int i { getInt() };
  std::cout << "You entered " << i << '\n';
  printDouble(i);
  return 0;
}

