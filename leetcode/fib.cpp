#include <iostream>
#include <unordered_map>

std::unordered_map<unsigned long long int, unsigned long long int> m;

long fib(int n) {
  if (n <= 1) {
    return n;
  }
  if (m.find(n) != m.end()) {
    return m[n];
  }
  int v = fib(n - 2) + fib(n - 1);
  m[n] = v;
  return v;
}

int main(int argc, char *args[]) { std::cout << fib(50) << "\n"; }
