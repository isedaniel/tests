#include <iostream>

int sumTo(int n) {
  int sum{};
  for (int i{1}; i <= n; ++i) {
    sum += i;
  }
  return sum;
}

int main() {
  std::cout << sumTo(6) << '\n';
  return 0;
}
