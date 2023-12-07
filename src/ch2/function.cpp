#include <iostream>

int getInt() {
  std::cout << "Enter a number: ";
  int i {};
  std::cin >> i;
  return i;
}

void printDouble(int i) {
  std::cout << i << " doubled is: " << i*2 << '\n';
}

void printDouble(int i, int x) {
  std::cout << "This is doubled doble" << '\n';
  printDouble(i);
  printDouble(x);
}

int main() {
  int i { getInt() };
  std::cout << "You entered " << i << '\n';
  printDouble(i, i+1);
  return 0;
}

