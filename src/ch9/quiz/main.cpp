#include "random.h"
#include <iostream>

int getGuess(int n) {
  int g{};
  while (g < 1 || 100 > g) {
    std::cout << "Guess #" << n << ": ";
    std::cin >> g;
  }
  return g;
}

bool game(int secretN) {
  std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. "
               "You have 7 tries to guess what it is.\n";
  int guess{};
  for (int i{1}; i < 8; ++i) {
    guess = getGuess(i);

    if (guess < secretN) {
      std::cout << "Your guess is too low.\n";
    } else if (guess > secretN) {
      std::cout << "Your guess is too high.\n";
    } else {
      return true;
    }
  }
  return false;
}

int main() {
  char play{'y'};

  while (true) {
    switch (play) {

    case 'y':
    case 'Y': {
      const int secretN{Random::get(1, 100)};

      if (game(secretN)) {
        std::cout << "Correct! You win!\n";
      } else {
        std::cout << "You lose! Number was " << secretN << ".\n";
      }
      break;
    }

    case 'n':
    case 'N': {
      return 0;
    }
    }

    std::cout << "Would you like to play again? (y/n) ";
    std::cin >> play;
  }
}
