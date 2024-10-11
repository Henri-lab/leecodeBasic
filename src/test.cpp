#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> result;
    unordered_map<int, int> hash;

    for (int i = 0; i < nums.size(); i++) {
      int complement = target - nums[i];
      if (hash.find(complement) != hash.end()) {
        result.push_back(hash[complement]);
        result.push_back(i);
        return result;
      }
      hash[nums[i]] = i;
    }

    return result;
  }
};

int main() {
  Solution so;
  // vector<int> nums = {2, 7, 11, 15};
  vector<int> nums;
  nums.push_back(2);
  nums.push_back(7);
  nums.push_back(11);
  nums.push_back(15);

  int target = 9;
  vector<int> result = so.twoSum(nums, target);

  if (!result.empty()) {
    cout << "Index1 = " << result[0] << ", Index2 = " << result[1] << endl;
  } else {
    cout << "No solution found!" << endl;
  }

  return 0;
}