#include "random.h"
#include <iostream>

int play(int guess) {
  std::cout << "Guess #" << guess << ": ";
  int g{};
  std::cin >> g;
  return g;
}

int main() {
  char play{'y'};
  while (play != 'n') {
    if (play == 'y') {
      std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. "
               "You have 7 tries to guess what it is.\n";
      int random{Random::get(1, 100)};
    }

    std::cout << "Would you like to play again? (y/n) ";
    std::cin >> play;
  }

  return 0;
}
