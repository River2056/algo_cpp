#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

std::string likes(const std::vector<std::string> &names) {
  stringstream ss;
  if (names.size() <= 0) {
    ss << "no one likes this";
  } else if (names.size() == 1) {
    ss << names[0] << " likes this";
  } else if (names.size() == 2) {
    ss << names[0] << " and " << names[1] << " like this";
  } else if (names.size() == 3) {
    ss << names[0] << ", " << names[1] << " and " << names[2] << " like this";
  } else {
    ss << names[0] << ", " << names[1] << " and " << names.size() - 2
       << " others like this";
  }

  return ss.str();
}

int main(int argc, char *argv[]) {
  vector<string> names = {};
  cout << likes(names) << "\n";

  names = {"Peter"};
  cout << likes(names) << "\n";

  names = {"Jacob", "Alex"};
  cout << likes(names) << "\n";

  names = {"Max", "John", "Mark"};
  cout << likes(names) << "\n";

  names = {"Alex", "Jacob", "Mark", "Max"};
  cout << likes(names) << "\n";

  return 0;
}
