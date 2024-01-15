#include <iostream>
#include <string>
#include <string_view>

int main() {
std::string_view sv{};
  {
    std::string s{ "nested string!\n"};
    std::cout << "Hello, from nested block!\n";
    std::cout << s;
    sv = s;
  }
  std::cout << sv;
  return 0;
}
