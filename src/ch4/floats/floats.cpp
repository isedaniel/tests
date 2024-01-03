#include <iostream>
#include <string>

int spend(int balance) {
  if (balance >= 25)
    return balance - 25;
  else
    std::cout << "Insufficient funds!\n";
  return balance;
}

int main() {
  int exit{0};
  int balance{100};

  while (!exit) {
    std::string cmd{};
    std::cout << "cmd: ";
    std::cin >> cmd;

    if (cmd == "exit")
      exit = 1;
    else if (cmd == "balance")
      std::cout << balance / 100.0 << '\n';
    else if (cmd == "spend")
      balance = spend(balance);
    else
      std::cout << "Command not found\n";
  }

  return 0;
}
