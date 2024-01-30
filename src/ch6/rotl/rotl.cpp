#include <bitset>
#include <iostream>

std::bitset<4> rotl(std::bitset<4> bits) {
  const std::bitset<4> left{0b1000};

  const bool checkLeft{(left & bits).any()};

  bits <<= 1;

  if (checkLeft) {
    const std::bitset<4> right{0b0001};
    bits = (bits | right);
  }
  return bits;
}

int main() {
  std::bitset<4> bits1{0b0001};
  std::cout << bits1 << ' ' << rotl(bits1) << '\n';
  std::bitset<4> bits2{0b1001};
  std::cout << bits2 << ' ' << rotl(bits2) << '\n';
  return 0;
}
