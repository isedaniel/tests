#include <cstdint>
#include <iostream>

int main() {
  std::uint8_t mask0{0b0000'0001};
  std::uint8_t mask1{0b0000'0010};
  std::uint8_t flags{0b0000'0101};

  std::cout << "bit 0 is " << ((flags & mask0) ? "on\n" : "off\n");
  std::cout << "bit 1 is " << ((flags & mask1) ? "on\n" : "off\n");
  return 0;
}
