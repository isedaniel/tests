#include <iostream>

namespace Constants {
inline constexpr double pi{3.14159};
}

using Degrees = double;
using Radians = double;

Radians convertToRadians(Degrees degrees) {
  return degrees * Constants::pi / 180;
}

int main() {
  std::cout << "Enter degrees: ";
  Degrees d{};
  std::cin >> d;

  Radians r{convertToRadians(d)};
  std::cout << d << " degrees is " << r << " radians.\n";
  return 0;
}
