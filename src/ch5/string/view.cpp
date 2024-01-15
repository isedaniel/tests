#include <iostream>
#include <string_view>

void printString(std::string_view s) { std::cout << s << '\n'; }

int main() {
  std::string_view s{"Hello, World!"};
  printString(s);
  return 0;
}
