#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool isAnagram(string s, string t) {
  unordered_map<char, int> freq;
  for (char c : s)
    freq[c]++;

  for (char c : t)
    freq[c]--;

  for (pair<char, int> p : freq)
    if (p.second != 0)
      return false;

  return true;
}

int main(int argc, char *argv[]) {
  cout << isAnagram("anagram", "nagaram") << "\n";
  cout << isAnagram("rat", "car") << "\n";
  return 0;
}
