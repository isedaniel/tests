#include <cassert>
#include <iostream>

double divide(int x, int y) {
  assert(y > 0);

  return static_cast<double>(x) / y;
}

int getInt() {
  std::cout << "Enter int: ";
  int n{};
  std::cin >> n;
  return n;
}

int main() {
  int x{getInt()};
  int y{getInt()};

  std::cout << x << " / " << y << " = " << divide(x, y) << '\n';

  return 0;
}
