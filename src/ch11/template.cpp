#include <iostream>

// C++20 function template
auto max(auto x, auto y) {
  return (x < y) ? y : x;
}

// but this is still needed for a template function of two parameters of
// the same type
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
