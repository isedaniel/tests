#include <iostream>

namespace Foo {
int g_x;
constexpr double g_y {9.8};
}

void function() {
  std::cout << "Printing from function(): " << Foo::g_x << '\n';
  std::cout << "Printing Foo::g_y from function(): " << Foo::g_y << '\n';
}

int main() {
  std::cout << "Printing from main(): " << Foo::g_x << '\n';
  function();
  Foo::g_x = 5;
  std::cout << "Changing and reprinting from main(): " << Foo::g_x << '\n';
  function();
  return 0;
}
