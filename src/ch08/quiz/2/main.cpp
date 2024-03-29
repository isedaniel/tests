#include <cassert>
#include <cmath>
#include <iostream>

bool isPrime(int x) {
  // less than 2 not prime
  if (x < 2) {
    return false;
  }
  // 2 the greatest prime
  if (x == 2) {
    return true;
  }
  // all the remaining even are not prime
  if (x % 2 == 0) {
    return false;
  }

  // now we can compute the subset
  double sq{std::sqrt(x)};
  for (int i{3}; i <= sq; i += 2) {
    if (x % i == 0) {
      return false;
    }
  }

  // if it was not divisible until the sqrt of x, then it is prime
  return true;
}

int main() {
  assert(!isPrime(0));
  assert(!isPrime(1));
  assert(isPrime(2));
  assert(isPrime(3));
  assert(!isPrime(4));
  assert(isPrime(5));
  assert(isPrime(7));
  assert(!isPrime(9));
  assert(isPrime(11));
  assert(isPrime(13));
  assert(!isPrime(15));
  assert(!isPrime(16));
  assert(isPrime(17));
  assert(isPrime(19));
  assert(isPrime(97));
  assert(!isPrime(99));
  assert(isPrime(13417));

  std::cout << "Success!\n";

  return 0;
}
