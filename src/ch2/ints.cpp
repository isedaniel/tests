#include "ints.h"
#include <iostream>

int getInt(std::string s) {
  std::string output{"Enter a number(" + s + "): "};
  std::cout << output;
  int i{};
  std::cin >> i;
  return i;
}

int doubleInt(int x) { return x * 2; }

void printDouble(int i) {
  std::cout << i << " doubled is: " << doubleInt(i) << '\n';
}

void printDouble(int x, int y) {
  std::cout << "This is doubled double" << '\n';
  printDouble(x);
  printDouble(y);
}
