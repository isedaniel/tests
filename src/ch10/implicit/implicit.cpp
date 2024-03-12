#include <iostream>

void printInt(int n) { std::cout << n << '\n'; }

int main() {
  int n {static_cast<long>(3)};
  printInt(n);
  return 0;
}
