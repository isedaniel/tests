#include "io.h"

int main() {
  int i { readNumber() };
  int j { readNumber() };
  writeAnswer(i + j);
  return 0;
}
