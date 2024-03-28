#include <iostream>

// well this is it

void print(const auto& a, const char end = '\n') { std::cout << a << end; }

int main() {
  int n{10};
  print(n);    // prints n value
  print(&n);   // prints n memory address
  print(*&n);  // prints the value at memory adress &n

  return 0;
}
