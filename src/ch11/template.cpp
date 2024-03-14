#include <iostream>

template <typename T>
T max(T x, T y) {
  return (x < y) ? y : x;
}

template <typename T>
void print(T p) {
  std::cout << p << '\n';
}

int main() {
  print(max(1, 2));
  return 0;
}
