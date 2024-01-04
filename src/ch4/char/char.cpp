#include <iostream>

int main() {
  char c{};
  for (int i = 0; i < 128; i++) {
    c = i;
    std::cout << i << ':' << c << '\n';
  }
  return 0;
}
