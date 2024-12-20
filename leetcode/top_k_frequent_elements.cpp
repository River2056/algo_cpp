#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k) {
  vector<int> result;
  unordered_map<int, int> freq;
  priority_queue<pair<int, int>> pq;
  for (int i : nums)
    freq[i]++;

  for (pair<int, int> p : freq) {
    pair<int, int> child;
    child.first = p.second;
    child.second = p.first;
    pq.push(child);
  }

  while (!pq.empty() && k > 0) {
    pair<int, int> p = pq.top();
    pq.pop();
    result.push_back(p.second);
    k--;
  }

  return result;
}

void print(vector<int> &result) {
  for (int i : result)
    cout << i << " ";
}

int main(int argc, char *argv[]) {
  vector<int> nums = {1, 1, 1, 2, 2, 3};
  int k = 2;
  auto result = topKFrequent(nums, k);
  print(result);

  return 0;
}
