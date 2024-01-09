#include <iostream>

int main() {
  constexpr int x{true ? 2 : 1};
  std::cout << x << '\n';
  return 0;
}
