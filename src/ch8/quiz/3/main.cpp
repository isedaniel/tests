#include "random.h"
#include <iostream>

void game() {
  std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";

  int number {Random::get(1, 100)};
  int guess{0};

  for (int i{1}; i<=7; ++i) {
    std::cout << "Guess #" << i << ": ";
    std::cin >> guess;

    if (guess < number) {
      std::cout << "Your guess is too low.\n";
    }
    else if (guess > number) {
      std::cout << "Your guess is too high.\n";
    }
    else {
      std::cout << "Correct! You win!\n";
      return;
    }
  }
  std::cout << "Sorry, you lose. The correct number was " << number << ".\n";
}

int main() {
  char play{'y'};
  while (play != 'n') {
    if (play == 'y') { game(); }

    std::cout << "Would you like to play again? (y/n) ";
    std::cin >> play;
  }

  return 0;
}
