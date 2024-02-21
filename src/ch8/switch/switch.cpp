#include <iostream>

void printName(int n) {
  std::cout << "N is ";
  switch (n) {
  case 1:
    std::cout << "one.";
    break;
  case 2:
    std::cout << "two.";
    break;
  case 3:
    std::cout << "three.";
    break;
  default:
    std::cout << "greater than three.";
    break;
  }
  std::cout << '\n';
}

int main() {
  int n{-1};
  while (n < 0 || 255 < n) {
    std::cout << "Enter a number [0-255]: ";
    std::cin >> n;
  }

  printName(n);
  return 0;
}
