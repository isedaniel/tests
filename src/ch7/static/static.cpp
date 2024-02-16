#include <iostream>

// the static keyword makes the variable program-wide persistent
void func() {
  static int s_i{};
  std::cout << s_i++ << '\n';
}

int main() {
  func();
  func();
  func();
  return 0;
}
