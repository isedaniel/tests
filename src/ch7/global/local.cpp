#include <iostream>

extern int g_x;

void function() {
  std::cout << "Printing from function(): " << g_x << '\n';
}
