#include <iostream>

void print(auto p, const char end='\n') {
  std::cout << p << end;
}

int main() {
  int n{1};
  int& ref{n};
  print(n);
  print(ref);

  print("n++");
  ++n;
  print(n);
  print(ref);

  print("ref++");
  ++ref;
  print(n);
  print(ref);

  // this shows that ref acts as alias for x
  
  // lvalue ref must bound to modifiable lvalue
  int i{1};
  int& r_i{i};
  print(r_i);

  int j{2};
  int& r_j{j};
  print(r_j);

  return 0;
}
