#include <iostream>

void print(auto &p, const char end = '\n') { std::cout << p << end; }

int main() {
  int n{1};
  int &ref{n};
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
  int &r_i{i};
  print(r_i);

  int j{2};
  int &r_j{j};
  print(r_j);

  // lvalue ref cannot be reseted
  int k{3};
  r_j = k;

  // j will change instead
  print(j);

  // to bind reference to value qualifier const must be maintained
  const int l{10};
  const int &r_l{l};
  print(r_l);

  // modifiable object can have const ref to prevent mod
  int m{11};
  const int &r_m{m};
  // r_m = 12; // can't modify through const ref
  m = 13;
  print(r_m);  // prints: 13
  return 0;
}
