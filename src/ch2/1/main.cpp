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

int main() {
  int a { readNumber() };
  int b { readNumber() };

  writeAnswer(a + b);
  return 0;
}
