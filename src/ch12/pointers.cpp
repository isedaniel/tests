#include <iostream>

// well this is it

void print(const auto& a, const char end = '\n') { std::cout << a << end; }

int main() {
  int n{10};
  int* ptr{nullptr};

  print(*ptr);

  return 0;
}
