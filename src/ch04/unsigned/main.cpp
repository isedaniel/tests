#include <iostream>

int main() {
  int i{-1};
  unsigned int j{1};
  if (i < j) {
    std::cout << "i is less than j\n";
  } else {
    std::cout << "j is less than i\n";
  }
  return 0;
}
