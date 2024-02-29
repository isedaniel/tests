#include <iostream>
#include <random>

int main() {
  std::mt19937 mt{ std::random_device{}() };

  std::uniform_int_distribution d6{ 1, 6};
  for (int i{1}; i <= 40; ++i) {
    std::cout << d6(mt) << '\t';
    if (i % 10 == 0) {
      std::cout << '\n';
    }
  }
  return 0;
}
