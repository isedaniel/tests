#include <iostream>

// the static keyword makes the variable program-wide persistent
void func() {
  static int i{};
  std::cout << i++ << '\n';
}

int main() {
  func();
  func();
  func();
  return 0;
}
