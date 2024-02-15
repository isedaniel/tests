#include "constants.h"
#include <iostream>

int main() {
  std::cout << "Enter radius: ";
  double radius{};
  std::cin >> radius;

  std::cout << "Circumference: " << 2 * radius * constants::pi << '\n';

  std::cout << "Area: " << radius * radius * constants::pi << '\n';

  return 0;
}
