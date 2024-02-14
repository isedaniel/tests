#include <iostream>

namespace constants {
int g_x{12};
}

void function(int x);

int main() {
  std::cout << "Printing from main(): " << constants::g_x << '\n';
  function(constants::g_x);
  constants::g_x = 5;
  std::cout << "Changing and reprinting from main(): " << constants::g_x << '\n';
  function(constants::g_x);

  return 0;
}

