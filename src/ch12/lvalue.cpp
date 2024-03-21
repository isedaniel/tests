#include <iostream>

void print(auto p, const char end='\n') {
  std::cout << p << end;
}

int main() {
  print("Hello, World!");
  print(1);
  print(1.2);
  print('c');
  return 0;
}
