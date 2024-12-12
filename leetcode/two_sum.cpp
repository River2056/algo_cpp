#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> two_sum(std::vector<int> &nums, int target) {
  std::unordered_map<int, int> m;
  std::vector<int> result;
  for (int i = 0; i < nums.size(); i++) {
    if (m.find(nums[i]) != m.end()) {
      result.push_back(i);
      result.push_back(m[nums[i]]);
      return result;
    }

    int diff = target - nums[i];
    m[diff] = i;
  }

  return result;
}

int main() {
  std::vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  std::vector<int> result = two_sum(nums, target);
  for (int i = 0; i < result.size(); i++) {
    std::cout << result[i] << "\n";
  }
}
