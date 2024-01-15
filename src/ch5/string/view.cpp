#include <iostream>
#include <string>

void printString(std::string s) { std::cout << s << '\n'; }

int main() {
  std::string s{"Hello, World!"};
  printString(s);
  return 0;
}
