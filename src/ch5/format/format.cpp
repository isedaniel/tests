#include <format>
#include <iostream>

int main() {
  std::cout << std::format("{:#b}\n", 0b1010);
  return 0;
}
