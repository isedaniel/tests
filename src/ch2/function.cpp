#include <iostream>

int getInt(std::string s) {
  std::string output{"Enter a number(" + s + "): "};
  std::cout << output;
  int i{};
  std::cin >> i;
  return i;
}

int doubleInt(int);

void printDouble(int i) { std::cout << i << " doubled is: " << doubleInt(i) << '\n'; }

void printDouble(int x, int y) {
  std::cout << "This is doubled doble" << '\n';
  printDouble(x);
  printDouble(y);
}

int main() {
  printDouble(getInt("x"), getInt("y"));
  return 0;
}

int doubleInt(int x) {
  return x*2;
}
