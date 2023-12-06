#include <iostream>

void getInt(int &i) {
  std::cout << "Enter a number: ";
  std::cin >> i;
}

int main() {
  int i{};
  getInt(i);

  std::cout << "You entered " << i << '\n';
  return 0;
}
