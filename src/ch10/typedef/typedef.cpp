#include <iostream>

using PrintError = int;

PrintError printData();

int main() {
  std::cout << "Printing data: ";
  printData();
  std::cout << '\n';
  return 0;
}
