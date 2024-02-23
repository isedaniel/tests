#include <iostream>

int main() {
  int outer{5};
  while (outer > 0) {
    // inner = 5, 4, 3, 2, 1
    int inner{outer};
    while (inner > 0) {
      std::cout << inner << ' ';
      --inner;
    }

    std::cout << '\n';
    --outer;
  }

  std::cout << '\n';

  outer = 1;
  while (outer <= 5) {
    // spaces = 4, 3, 2, 1
    int spaces{5 - outer};
    while (spaces > 0) {
      std::cout << "  ";
      --spaces;
    }

    int num{1};
    while (num <= outer) {
      std::cout << num << ' ';
      ++num;
    }

    std::cout << '\n';
    ++outer;
  }
  return 0;
}
