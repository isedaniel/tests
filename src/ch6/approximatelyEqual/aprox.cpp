#include <algorithm>
#include <cmath>
#include <iostream>

bool approximatelyEqualRel(double x, double y, double relEpsilon) {
  return (std::abs(x - y) <= (std::max(std::abs(x), std::abs(y)) * relEpsilon));
}

int main() {
  double x{10.2 - 10.0};
  double y{20.2 - 20.0};
  double relEpsilon{1e-4};

  std::cout << approximatelyEqualRel(x, y, relEpsilon) << '\n';
  return 0;
}
