#include "random.h"
#include <iostream>

int main() {
  std::cout << "Getting random numbers from a d20\n";
  for (int i{1};i<=100;++i) {
    std::cout << Random::get(1, 20) << '\t';
    if (i % 10 == 0) {
      std::cout << '\n';
    }
  }
  return 0;
}
