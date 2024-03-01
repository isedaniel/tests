#include <iostream>

// Get tower height from user
double getTowerHeight() {
  std::cout << "Enter the height of the tower in meters: ";
  double towerHeight{};
  std::cin >> towerHeight;
  return towerHeight;
}

double calculateBallHeight(double towerHeight, int seconds) {
  const double gravity{9.8};
  const double fallDistance{gravity * seconds * seconds / 2.0};
  const double ballHeight{towerHeight - fallDistance};

  if (ballHeight < 0)
    return 0.0;

  return ballHeight;
}

void printBallHeight(double ballHeight, int seconds) {
  if (ballHeight > 0) {
    std::cout << "At " << seconds
              << " seconds, the ball is at height: " << ballHeight
              << " meters.\n";
  } else {
    std::cout << "At " << seconds << " the ball is on the ground.\n";
  }
}

void calculateAndPrintBallHeight(double towerHeight, int seconds) {
  double ballHeight{calculateBallHeight(towerHeight, seconds)};
  printBallHeight(ballHeight, seconds);
}

int main() {
  double towerHeight{getTowerHeight()};

  calculateAndPrintBallHeight(towerHeight, 1);
  calculateAndPrintBallHeight(towerHeight, 2);
  calculateAndPrintBallHeight(towerHeight, 3);
  calculateAndPrintBallHeight(towerHeight, 4);
  calculateAndPrintBallHeight(towerHeight, 5);
}
