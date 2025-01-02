#include <cmath>
#include <iostream>

using namespace std;

bool isPrime(int num) {
  // your code here..
  if (num <= 1)
    return false;

  for (int i = 2; i < sqrt(num); i++)
    if (num % i == 0)
      return false;

  return true;
}

int main(int argc, char *argv[]) {
  cout << isPrime(1) << "\n";  // false
  cout << isPrime(3) << "\n";  // true
  cout << isPrime(5) << "\n";  // true
  cout << isPrime(13) << "\n"; // true
  cout << isPrime(14) << "\n"; // false
  return 0;
}
