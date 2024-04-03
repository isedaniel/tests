#include <iostream>

// well this is it

void print(const auto& a, const char end = '\n') { std::cout << a << end; }

int main() {
  int n{10};
  int* ptr_n{&n};

  print(*ptr_n);

  {
    int m{11};
    ptr_n = &m;
    print(*ptr_n);
  }

  print(*ptr_n);

  return 0;
}
