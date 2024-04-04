#include <iostream>

// well this is it

void print(const auto& a, const char end = '\n') { std::cout << a << end; }

int main() {
  int n{10};
  int* ptr{nullptr};

  ptr = &n;
  print(*ptr);

  return 0;
}
