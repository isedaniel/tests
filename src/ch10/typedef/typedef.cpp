#include <iostream>

using PrintError = int;

PrintError printData();

int main() {
  std::cout << "Printing data: ";
  auto data{printData()};
  std::cout << data << '\n';
  return 0;
}
