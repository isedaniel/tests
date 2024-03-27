#include <iostream>

// with auto it works because it retains qualifiers
void print(const auto& p, const char end = '\n') {
  std::cout << p << end;
}

// other way is to manually retain the const qualifier
void printInt(const int& n) { std::cout << n << '\n'; }

int main() {
  std::string s{"Hello, World!"};
  s = "Goodbye, Mars!";
  print(s);
  return 0;
}
