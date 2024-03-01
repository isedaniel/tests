#include <iostream>

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
  constexpr double gravity{9.8};
  const double fallDistance{gravity * seconds * seconds / 2.0};
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

bool calculateAndPrintHeight(double initialHeight, int seconds) {
  double ballHeight{calculateHeight(initialHeight, seconds)};
  printHeight(ballHeight, seconds);
  return (ballHeight > 0);
}
} // namespace Ball

int main() {
  double towerHeight{Tower::getHeight()};
  int seconds{1};
  bool fallingBall{Ball::calculateAndPrintHeight(towerHeight, seconds)};
  while (fallingBall) {
    ++seconds;
    fallingBall = Ball::calculateAndPrintHeight(towerHeight, seconds);
  }
  return 0;
}
