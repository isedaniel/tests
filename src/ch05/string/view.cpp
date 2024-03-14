#include <iostream>
#include <string_view>

void printString(std::string_view s) { std::cout << s << '\n'; }

std::string addSuffix(std::string_view sv) {
  const std::string suffix{"suffix "};
  return suffix + std::string(sv);
}

int main() {
  const std::string s{"string"};
  const std::string ss{s + std::string(" something")};
  printString(s);
  const std::string s2{addSuffix(s)};
  printString(s2);
  return 0;
}
