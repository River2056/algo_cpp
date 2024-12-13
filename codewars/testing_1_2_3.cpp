#include <iostream>

#include <sstream>
#include <string>
#include <vector>

std::vector<std::string> number(const std::vector<std::string> &lines) {
  if (lines.size() <= 0)
    return {};

  std::vector<std::string> result;
  for (int i = 0; i < lines.size(); i++) {
    std::stringstream ss;
    ss << i + 1 << ": " << lines[i];
    result.push_back(ss.str());
  }

  return result;
}

int main(int argc, char *argv[]) {
  std::vector<std::string> arr = {};
  auto result = number(arr);
  for (int i = 0; i < result.size(); i++)
    std::cout << result[i] << " ";

  std::cout << "\n";

  std::vector<std::string> arr2 = {"a", "b", "c"};
  auto result2 = number(arr2);
  for (int i = 0; i < result2.size(); i++)
    std::cout << result2[i] << " ";

  return 0;
}
