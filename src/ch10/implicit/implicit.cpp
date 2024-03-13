#include <iostream>

void printInt(int n) { std::cout << n << '\n'; }

int main() {
  char c{};
  for (int i{-128}; i < 256; ++i) {
    c = i;
    std::cout << i << ": " << c << "\n";
  }
  return 0;
}
