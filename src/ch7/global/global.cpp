#include <iostream>

namespace constants {
constexpr int g_x{12};
}

void function(int x);

int main() {
  std::cout << "Printing from main(): " << constants::g_x << '\n';
  function(constants::g_x);
  std::cout << "Changing and reprinting from main(): " << constants::g_x - 7 << '\n';
  function(constants::g_x);

  return 0;
}

