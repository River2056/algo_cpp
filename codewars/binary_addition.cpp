#include <cstdint>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

std::string add_binary(uint64_t a, uint64_t b) {
  uint64_t sum = a + b;
  vector<int> result;
  stringstream ss;

  while (sum > 0) {
    result.push_back(sum % 2);
    sum /= 2;
  }

  for (int i = result.size() - 1; i >= 0; i--)
    ss << result[i];

  return ss.str();
}

int main(int argc, char *argv[]) {
  cout << add_binary(1, 1) << "\n";
  cout << add_binary(5, 9) << "\n";

  return 0;
}
