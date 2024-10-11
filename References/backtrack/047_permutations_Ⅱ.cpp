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

            if (i > 0 && nums[i] == nums[i - 1] && used[i - 1] == false || used[i] == true)
                continue;
            path.push_back(nums[i]);
            used[i] = true;
            backtracking(nums, used);
            path.pop_back();
            used[i] = false;
        }
    }

public:
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        res.clear();
        path.clear();
        std::vector<bool> used(nums.size(), false);
        sort(nums.begin(), nums.end());
        backtracking(nums, used);
        return res;
    }
};