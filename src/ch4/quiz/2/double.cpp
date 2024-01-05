#include <iostream>

double getDouble() {
  std::cout << "Enter a double: ";
  double d{};
  std::cin >> d;
  return d;
}

char getOperation() {
  std::cout << "Enter a mathematical operation (+, -, *, /): ";
  char c{};
  std::cin >> c;
  return c;
}

void printResult(double d1, double d2, char operation) {
  if (operation == '+')
    std::cout << d1 << " + " << d2 << " = " << d1 + d2 << '\n';
  else if (operation == '-')
    std::cout << d1 << " - " << d2 << " = " << d1 - d2 << '\n';
  else if (operation == '*')
    std::cout << d1 << " * " << d2 << " = " << d1 * d2 << '\n';
  else if (operation == '/') {
    if (d2 != 0)
      std::cout << d1 << " / " << d2 << " = " << d1 / d2 << '\n';
    else
      std::cout << "Undetermined\n";
  } else 
    std::cout << "Invalid operation\n";
}

int main() {
  double d1{getDouble()};
  double d2{getDouble()};
  char op{getOperation()};
  printResult(d1, d2, op);
  return 0;
}
