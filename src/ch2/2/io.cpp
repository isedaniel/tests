#include <iostream>

int readNumber() {
  std::cout << "Enter a number: ";
  int i {};
  std::cin >> i;
  return i;
}

void writeAnswer(int i) {
  std::cout << "Sum: " << i << '\n';
}
