int readNumber();

void writeAnswer(int i);

int main() {
  int i { readNumber() };
  int j { readNumber() };
  writeAnswer(i + j);
  return 0;
}
