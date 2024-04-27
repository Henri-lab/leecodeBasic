#include <vector>

class Solution
{
private:
    std::vector<std::vector<int>> res;
    std::vector<int> path;
    void backtracking(vector<int> &nums, int startIndex)
    {
        res.push_back(path);           // collect allNotes instead of leafNodes
        if (startIndex == nums.size()) // arrive leafNodes
        {
            // res.push_back(path);
            return;
        }
        for (int i = startIndex; i < nums.size(); i++)
        {
            path.push_back(nums[i]);
            backtracking(nums, i + 1);
            path.pop_back();
        }
    }

public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        res.clear();
        path.clear();
        backtracking(nums, 0);
        return res;
    }
};