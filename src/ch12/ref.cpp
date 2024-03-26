#include <iostream>

void print(auto& p, const char end='\n') {
  std::cout << p << end;
}

void printInt(int& n) {
  std::cout << n << '\n';
}

int main() {
  // if i pass a non-modifiable l-value it wont work
  const int s { 10 };
  printInt(s);
  return 0;
}
