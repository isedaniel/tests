#include <iostream>

std::string getName(int number) {
  std::cout << "Enter the name of person #" << number << ": ";
  std::string name{};
  std::getline(std::cin >> std::ws, name);
  return name;
}

int getAge(std::string_view name) {
  std::cout << "Enter the age of " << name << ": ";
  int age{};
  std::cin >> age;
  return age;
}

void printOlder(std::string_view olderName, int olderAge,
                std::string_view youngerName, int youngerAge) {
  std::cout << olderName << " (age " << olderAge << ") is older than "
            << youngerName << " (age " << youngerAge << ").\n";
}

void printSameAge(std::string_view name1, std::string_view name2, int age) {
  std::cout << name1 << " and " << name2 << " are the same age (" << age
            << ").\n";
}

void getOlder(std::string_view name1, int age1, std::string_view name2,
              int age2) {
  if (age1 > age2)
    printOlder(name1, age1, name2, age2);
  else if (age2 > age1)
    printOlder(name2, age2, name1, age1);
  else
    printSameAge(name1, name2, age1);
}

int main() {
  std::string name1{getName(1)};
  int age1{getAge(name1)};
  std::string name2{getName(2)};
  int age2{getAge(name2)};
  getOlder(name1, age1, name2, age2);
  return 0;
}
