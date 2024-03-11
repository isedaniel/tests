#include <iostream>

void printInt(int n) { std::cout << n << '\n'; }

int main() {
  char c{};
  for (short s{1}; s<101; ++s) {
    c = s;
    std::cout << s << ' ' << c << '\n';
  }

  int i = 3.5;
  printInt(i);
  return 0;
}
