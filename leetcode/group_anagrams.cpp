#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs) {
  unordered_map<string, vector<string>> m;
  vector<vector<string>> result;
  vector<string> sorted;
  for (string s : strs)
    sorted.push_back(s);
  for (string &s : sorted) {
    string copy = s;
    sort(s.begin(), s.end());
    m[s].push_back(copy);
  }

  for (pair<string, vector<string>> p : m)
    result.push_back(p.second);

  return result;
}

void printList(vector<vector<string>> list) {
  stringstream ss;
  ss << "[";
  for (vector<string> &inner : list) {
    ss << "[";
    for (string s : inner)
      ss << s << ", ";
    ss << "]"
       << ", ";
  }
  ss << "]";

  cout << ss.str();
}

int main(int argc, char *argv[]) {
  vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
  printList(groupAnagrams(strs));

  return 0;
}
