#include <iostream>

void print(auto p, const char end='\n') {
  std::cout << p << end;
}

int main() {
  int n{1};
  int& ref{n};
  print(n);
  print(ref);
  return 0;
}
