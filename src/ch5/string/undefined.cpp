#include <iostream>
#include <string>
#include <string_view>

std::string getName() {
  std::string s{"Danilo"};
  return s;
}

int main() {
  std::string_view sv{getName()};
  std::cout << sv << '\n';
  return 0;
}
