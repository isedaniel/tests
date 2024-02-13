#include <iostream>

int g_x{};

void function() {
  std::cout << "Printing from function(): " << g_x << '\n';
}

int main() {
  std::cout << "Printing from main(): " << g_x << '\n';
  function();
  g_x = 5;
  std::cout << "Changing and reprinting from main(): " << g_x << '\n';
  function();
  return 0;
}
