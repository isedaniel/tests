#include <iostream>

int getInt(std::string s);

int doubleInt(int x);

void printDouble(int i);
void printDouble(int x, int y);

int main() {
  printDouble(getInt("x"), getInt("y"));
  return 0;
}
