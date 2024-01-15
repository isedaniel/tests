#include <iostream>
#include <string_view>

std::string_view getBoolName(bool b) {
  if (b)
    return "true";
  return "false";
}

int main() {
  std::cout << getBoolName(true) << ' ' << getBoolName(false) << '\n';
  return 0;
}
