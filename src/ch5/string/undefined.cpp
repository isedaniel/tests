#include <iostream>
#include <string>
#include <string_view>

int main() {
  std::string s{"Hello"};
  std::string_view sv{s};

  s = "Good bye !";
  std::cout << sv << '\n';
  return 0;
}
