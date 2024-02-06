#include <iostream>

int main() {
  int b1{};
  int b2{};
  int b4{};
  int b8{};
  int b16{};
  int b32{};
  int b64{};
  int b128{};

  std::cout << "Enter a number (0-255): ";
  int num{};
  std::cin >> num;

  if (num > 255) {
    std::cout << "Number should be lesser than 255\n";
    return 1;
  }

  if (num >= 128) {
    b128 = 1;
    num -= 128;
  }

  if (num >= 64) {
    b64 = 1;
    num -= 64;
  }
  if (num >= 32) {
    b32 = 1;
    num -= 32;
  }
  if (num >= 16) {
    b16 = 1;
    num -= 16;
  }
  if (num >= 8) {
    b8 = 1;
    num -= 8;
  }
  if (num >= 4) {
    b4 = 1;
    num -= 4;
  }
  if (num >= 2) {
    b2 = 1;
    num -= 2;
  }

  if (num == 1) {
    b1 = 1;
  }

  std::cout << b128 << b64 << b32 << b16 << ' ' << b8 << b4 << b2 << b1 << '\n';
  return 0;
}
