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
  long nameLen{std::ssize(name)};
  std::cout << "Name len: " << nameLen << '\n';
  long dogNameLen{std::ssize(dogName)};
  std::cout << "Dog's name len: " << dogNameLen << '\n';
  std::cout << "Enter your age: ";
  long age;
  std::cin >> age;
  std::cout << "Name len + Dog's name len + age: " << nameLen + dogNameLen + age
            << '\n';
  return 0;
}
