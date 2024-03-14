#include <iostream>

consteval int max(int x, int y) { return (x > y ? x : y); }

int main() {
  constexpr int x{1};
  constexpr int y{true ? 2 : 1};
  constexpr int z{max(x, y)};
  std::cout << z << '\n';
  return 0;
}
