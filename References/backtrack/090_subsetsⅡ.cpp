#include <vector>
class Solution
{
private:
    std::vector<int> path;
    std::vector<vector<int>> res;
    void backtracking(vector<int> &nums, int startIndex, vector<bool> &used)
    {
        res.push_back(path);
        if (startIndex == nums.size())
        {
            return;
        }
        for (int i = startIndex; i < nums.size(); i++) // combination
        {
            // deduplication of the same level
            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])
            {
                continue;
            }
            path.push_back(nums[i]);
            used[i] = true;
            backtracking(nums, i + 1, used);
            path.pop_back();
            used[i] = false;
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        res.clear();
        path.clear();
        vector<bool> used(nums.size(), false);
        sort(nums.begin(), nums.end());
        backtracking(nums, 0, used);
        return res;
    }
};