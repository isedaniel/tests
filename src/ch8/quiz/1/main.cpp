#include <iostream>

namespace Constants
{
constexpr double gravity{9.8};
}

namespace Tower {
double getHeight() {
  std::cout << "Enter the height of the tower in meters: ";
  double towerHeight{};
  std::cin >> towerHeight;
  return towerHeight;
}
} // namespace Tower

namespace Ball {
double calculateHeight(double initialHeight, int seconds) {
  const double fallDistance{Constants::gravity * seconds * seconds / 2.0};
  const double ballHeight{initialHeight - fallDistance};

  if (ballHeight < 0) {
    return 0.0;
  }

  return ballHeight;
}

void printHeight(double ballHeight, int seconds) {
  if (ballHeight > 0) {
    std::cout << "At " << seconds
              << " seconds the ball is at height: " << ballHeight
              << " meters.\n";
  } else {
    std::cout << "At " << seconds << " seconds the ball is on the ground.\n";
  }
}

double calculateAndPrintHeight(double initialHeight, int seconds) {
  double ballHeight{calculateHeight(initialHeight, seconds)};
  printHeight(ballHeight, seconds);
  return ballHeight;
}

} // namespace Ball

int main() {
  double towerHeight{Tower::getHeight()};

  int seconds{0};
  while (Ball::calculateAndPrintHeight(towerHeight, seconds) > 0.0) {
    ++seconds;
  }
  return 0;
}
