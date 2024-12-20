#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

bool containsDuplicate(vector<int> &nums) {
  unordered_map<int, int> m;
  for (int i = 0; i < nums.size(); i++)
    m[nums[i]]++;

  for (pair<int, int> keyvalue : m)
    if (keyvalue.second > 1)
      return true;

  return false;
}

int main(int argc, char *argv[]) {
  vector<int> nums = {1, 2, 3, 1};
  cout << containsDuplicate(nums) << "\n";

  nums = {1, 2, 3, 4};
  cout << containsDuplicate(nums) << "\n";

  nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
  cout << containsDuplicate(nums) << "\n";

  return 0;
}
