#include <iostream>

void print(auto& p, const char end='\n') {
  std::cout << p << end;
}

int main() {
  std::string s {"This is a std::string"};
  return 0;
}
