#include <cstdint>
#include <iostream>

int main() {
  constexpr std::uint8_t mask0{0b0000'0001};
  constexpr std::uint8_t mask1{0b0000'0010};
  constexpr std::uint8_t mask2{0b0000'0100};
  std::uint8_t flags{0b0000'0101};

  std::cout << "bit 0 is " << ((flags & mask0) ? "on\n" : "off\n");

  std::cout << "bit 1 is " << ((flags & mask1) ? "on\n" : "off\n");
  flags |= mask1;
  std::cout << "bit 1 is " << ((flags & mask1) ? "on\n" : "off\n");

  std::cout << "bit 2 is " << ((flags & mask2) ? "on\n" : "off\n");
  flags &= static_cast<std::uint8_t>(~mask2);
  std::cout << "bit 2 is " << ((flags & mask2) ? "on\n" : "off\n");

  return 0;
}
