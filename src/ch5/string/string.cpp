#include <iostream>
#include <string>

int main() {
  std::cout << "Enter your full name: ";
  std::string name{};
  std::getline(std::cin >> std::ws, name);
  std::cout << "Enter your dog's name: ";
  std::string dogName{};
  std::getline(std::cin >> std::ws, dogName);
  std::cout << "Your name is " << name << " and your dog's name is " << dogName
            << ".\n";
  int nameLen { static_cast<int>(name.length()) };
  std::cout << "Name len: " << nameLen << '\n';
  int dogNameLen { static_cast<int>(dogName.length()) };
  std::cout << "Dog's name len: " << dogNameLen << '\n';
  return 0;
}
