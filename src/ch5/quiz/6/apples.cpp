#include <iostream>

constexpr std::string getQuantityPhrase(int quantity) { 
  if (quantity < 0)
    return "negative";
  if (quantity == 0)
    return "no";
  if (quantity == 1)
    return "a single";
  if (quantity == 2)
    return "a couple of";
  if (quantity == 3)
    return "a few";
  return "many";
}

constexpr std::string getApplesPluralized(int quantity) {
  if (quantity == 1) return "apple";
  return "apples";
}

int main() {
  std::cout << "Mary has " << getQuantityPhrase(3) << ' '
            << getApplesPluralized(3) << ".\n";

  std::cout << "How many apples do you have? ";
  int numApples{};
  std::cin >> numApples;
  std::cout << "You have " << getQuantityPhrase(numApples) << ' '
            << getApplesPluralized(numApples) << ".\n";
  return 0;
}
