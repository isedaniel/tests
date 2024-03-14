#include <iostream>

double getHeight() {
  std::cout << "Enter the height of the tower in meters: ";
  double height{};
  std::cin >> height;
  return height;
}

double getDistanceFallen(int second) {
  double gravity {9.8};
  double distanceFallen {gravity * second * second / 2.0};
  return distanceFallen;
}

void printHeightAtSecond(double initial, int second) {
  double newHeight { initial - getDistanceFallen(second) };
  if (newHeight > 0)
    std::cout << "At " << second
              << " seconds, the ball is at height: " << newHeight
              << " meters.\n";
  else
    std::cout << "At " << second << " seconds, the ball is on the ground.\n";
}

int main() {
  double height{getHeight()};
  for (int i = 0; i <= 5; i++) {
    printHeightAtSecond(height, i);
  }
  return 0;
}
