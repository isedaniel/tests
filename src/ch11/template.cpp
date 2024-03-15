#include <iostream>

template <typename T, typename U>
auto max(T x, U y) {
  return (x < y) ? y : x;
}

template <typename T>
void print(T p, const char end='\n') {
  std::cout << p << end;
}

void print(bool b, const char end='\n') {
  std::cout << std::boolalpha << b << end;
}

template <typename T>
T add(T x, T y) {
  return x + y;
}

int main() {
  print(max<int>(1, 2));
  print(add<double>(1.2, 3.4));
  print("Hello, World!");
  print(false);
  print(max(1, 2.5));
  return 0;
}
