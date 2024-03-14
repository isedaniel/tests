#include <iostream>

int printAndDecrement(int num, int pow) {
  if (num >= pow) {
    std::cout << '1';
    return (num - pow);
  }
  else
    std::cout << '0';
  return num;
}

int main() {
  std::cout << "Enter a number (0-255): ";
  int num{};
  std::cin >> num;

  if (num < 0 || 255 < num) {
    std::cout << "Number should be from 0 to 255\n";
    return 1;
  }

  num = printAndDecrement(num, 128);
  num = printAndDecrement(num, 64);
  num = printAndDecrement(num, 32);
  num = printAndDecrement(num, 16);

  std::cout << ' ';

  num = printAndDecrement(num, 8);
  num = printAndDecrement(num, 4);
  num = printAndDecrement(num, 2);
  num = printAndDecrement(num, 1);

  std::cout << '\n';
  return 0;
}
