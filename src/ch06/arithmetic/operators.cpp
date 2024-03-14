#include <iostream>

int main() {
  constexpr int apples {12};
  std::cout << "You have " << apples << " apples. Enter how many people to divide them between: ";
  double people{};
  std::cin >> people;
  std::cout << "Each person gets " << apples / people << " apples.\n";
  return 0;
}
