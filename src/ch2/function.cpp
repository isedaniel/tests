#include <iostream>

int getInt(std::string s) {
  std::string  output { "Enter a number(" + s + "): " };
  std::cout << output;
  int i {};
  std::cin >> i;
  return i;
}

void printDouble(int i) {
  std::cout << i << " doubled is: " << i*2 << '\n';
}

void printDouble(int x, int y) {
  std::cout << "This is doubled doble" << '\n';
  printDouble(x);
  printDouble(y);
}

int main() {
  printDouble(getInt("x"), getInt("y"));
  return 0;
}

