#include <iostream>

// std::string_view is generally preferable
// const std::string& needs expensive convertions
void printSV(std::string_view sv, const char end='\n') {
  std::cout << sv << end;
}

int main() {
  std::string s{"Goodbye, Mars!"};
  printSV(s);

  return 0;
}
