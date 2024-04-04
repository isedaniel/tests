#include <iostream>

// well this is it

void print(const auto& a, const char end = '\n') { std::cout << a << end; }

int main() {
  int* ptr{nullptr};

  print(ptr? "nullptr" : "non-nullptr");

  return 0;
}
