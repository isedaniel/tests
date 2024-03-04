#include <iostream>

void game() {
  int number {42};

  for (int guess{1}; guess <= 7; ++guess) {
    
  }
}

int main() {
  char play{'y'};
  while (play == 'y') {
    // game

    std::cout << "Would you like to play again? (y/N) ";
    std::cin >> play;
  }

  return 0;
}
