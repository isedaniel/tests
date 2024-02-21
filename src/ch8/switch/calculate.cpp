#include <iostream>

void calculate(int x, int y, char operation) {
  switch (operation) {
    case '+':
      std::cout << x + y;
    break;
    case '-':
      std::cout << x - y;
      break;
    case '*':
      std::cout << x * y;
      break;
    case '/':
      if (y == 0) {
        std::cout << "Division by 0 not allowed";
        break;
      }
      std::cout << x / y;
      break;
    default:
      std::cout << "Insert a valid operator (+, -, *, /)";
      break;
  }
  std::cout << '\n';
}

int main() {
  std::cout << "Insert a number: ";
  int x{};
  std::cin >> x;

  std::cout << "Insert another number: ";
  int y{};
  std::cin >> y;

  std::cout << "Operation (+, -, *, /): ";
  char operation{};
  std::cin >> operation;

  calculate(x, y, operation);
  return 0;
}
