#include <iostream>
#include <string>

int main() {
  std::cout << "Enter your full name: ";
  std::string name{};
  std::cin >> name;
  std::cout << "Enter your dog's name: ";
  std::string dogName{};
  std::cin >> dogName;
  std::cout << "Your name is " << name << " and your dog's name is " << dogName
            << ".\n";
  return 0;
}
