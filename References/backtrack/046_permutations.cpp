// Wrong Answer
#include <vector>
class Solution
{
private:
    std::vector<std::vector<int>> res;
    std::vector<int> path;
    void backtracking(vector<int> &nums, vector<bool> &used)
    {
        if (path.size() == nums.size())
        {
            res.push_back(path);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            path.push_back(nums[i]);
            used[i] = true;
            nums.erase(nums.begin() + i);
            std::vector<int> rest = nums;
            backtracking(rest, used);
            path.pop_back();
            used[i] = false;
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        res.clear();
        path.clear();
        std::vector<bool> used(nums.size(), false);
        backtracking(nums, used);
        return res;
    }
};