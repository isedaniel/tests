#include <iostream>

int add(int x, int y) {
  return x + y;
}

double add(double x, double y) {
  return x + y;
}

double returnOne() {
  return 1.0;
}

int main(){
  std::cout << add(1, 2) << '\n';
  std::cout << add(1.1, 2.2) << '\n';
  std::cout << returnOne() << '\n';
  return 0;
}
