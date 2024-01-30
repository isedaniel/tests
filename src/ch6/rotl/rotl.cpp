#include <bitset>
#include <iostream>

std::bitset<4> rotl(std::bitset<4> bits) {
  return (bits << 1) | (bits >> 3);
}

int main() {
  std::bitset<4> bits1{0b0001};
  std::cout << bits1 << ' ' << rotl(bits1) << '\n';
  std::bitset<4> bits2{0b1001};
  std::cout << bits2 << ' ' << rotl(bits2) << '\n';
  return 0;
}
