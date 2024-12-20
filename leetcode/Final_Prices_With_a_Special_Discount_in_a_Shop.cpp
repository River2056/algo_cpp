#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> finalPrices(vector<int> &prices) {
  vector<int> result;
  unordered_map<int, int> m;
  for (int i = 0; i < prices.size(); i++)
    m[i] = prices[i];

  for (int i = 0; i < prices.size(); i++) {
    int j = i + 1;
    int v = m[j];
    while (v > prices[i]) {
      j++;
      v = m[j];
    }
    result.push_back(prices[i] - v);
  }

  return result;
}

void printList(vector<int> &result) {
  for (int price : result)
    cout << price << " ";
  cout << "\n";
}

int main(int argc, char *argv[]) {
  vector<int> prices = {8, 4, 6, 2, 3};
  vector<int> result = finalPrices(prices);
  printList(result);

  prices = {1, 2, 3, 4, 5};
  result = finalPrices(prices);
  printList(result);

  prices = {10, 1, 1, 6};
  result = finalPrices(prices);
  printList(result);
  return 0;
}
