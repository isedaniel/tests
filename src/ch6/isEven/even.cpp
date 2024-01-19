#include <iostream>

constexpr bool isEven(int n) { return n % 2 == 0; }

int main() {
  for (int i = -5; i < 5; i++) {
    if (isEven(i))
      std::cout << i << " is even\n";
    else
      std::cout << i << " is odd\n";
  }
}
