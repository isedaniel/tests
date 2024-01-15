#include <iostream>
#include <string>
#include <string_view>

std::string_view getBoolName(bool b) {
  std::string f { "false" };
  std::string t { "true" };
  
  if (b)
    return t;
  return f;
}

int main() {
  std::cout << getBoolName(true) << ' ' << getBoolName(false) << '\n';
  return 0;
}
