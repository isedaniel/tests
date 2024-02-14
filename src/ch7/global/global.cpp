#include <iostream>

int g_x{12};

void function(int x);

int main() {
  std::cout << "Printing from main(): " << g_x << '\n';
  function(g_x);
  g_x = 5;
  std::cout << "Changing and reprinting from main(): " << g_x << '\n';
  function(g_x);

  return 0;
}

