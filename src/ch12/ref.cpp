#include <iostream>

// with auto it works because it retains qualifiers
void print(auto& p, const char end='\n') {
  std::cout << p << end;
}

// other way is to manually retain the const qualifier
void printInt(const int& n) {
  std::cout << n << '\n';
}

int main() {
  // a non-const lvalue can be used as const rvalue ref argument
  int s { 10 };
  printInt(s);

  // an rvalue can also be used
  printInt(5);
  return 0;
}
