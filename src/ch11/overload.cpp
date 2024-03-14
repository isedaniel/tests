#include <iostream>

int add(int x, int y) {
  return x + y;
}

double add(double x, double y) {
  return x + y;
}

int main(){
  std::cout << add(1, 2) << '\n';
  std::cout << add(1.1, 2.2) << '\n';
  std::cout << add(1L, 4L) << '\n';
  return 0;
}
