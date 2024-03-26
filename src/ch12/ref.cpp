#include <iostream>

// with auto it works because it retains qualifiers
void print(auto& p, const char end='\n') {
  std::cout << p << end;
}

void printInt(int& n) {
  std::cout << n << '\n';
}

int main() {
  // auto 
  const int s { 10 };
  print(s);
  return 0;
}
