#include <iostream>

namespace Foo {
int g_x{12};
} // namespace Foo

void function(int x);

int main() {
  std::cout << "Printing from main(): " << Foo::g_x << '\n';
  function(Foo::g_x);
  Foo::g_x = 5;
  std::cout << "Changing and reprinting from main(): " << Foo::g_x << '\n';
  function(Foo::g_x);

  return 0;
}

