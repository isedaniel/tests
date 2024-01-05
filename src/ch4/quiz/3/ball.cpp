#include <iostream>

double getHeight() {
  std::cout << "Enter the height of the tower in meters: ";
  double height{};
  std::cin >> height;
  return height;
}

double getNewHeight(double height, int second) {
  double gravity {9.8};

void getHeightAtSecond(double height, int second) {
  double gravity{9.8};
  double distanceFallen{gravity * second * second / 2};
  if (height > distanceFallen)
    std::cout << "At " << second
              << " seconds, the ball is at height: " << height - distanceFallen
              << " meters.\n";
  else
    std::cout << "At " << second << " seconds, the ball is on the ground.\n";
}

int main() {
  double height{getHeight()};
  for (int i = 0; i <= 5; i++) {
    getHeightAtSecond(height, i);
  }
  return 0;
}
