#include <iostream>

// with auto it works because it retains qualifiers
void print(auto &p, const char end = '\n') { std::cout << p << end; }

// other way is to manually retain the const qualifier
void printInt(const int &n) { std::cout << n << '\n'; }

int main() {
  const std::string s{"Hello, World!"};
  print(s);
  return 0;
}
