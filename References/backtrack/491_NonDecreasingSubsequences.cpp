// Runtime Error? =====>path.size() > 0 && path.back()>0 IS NOT EQUAL TO 'reversed expression'
#include <unordered_set>
#include <vector>
class Solution
{
private:
    std::vector<std::vector<int>> res;
    std::vector<int> path;

    void backtracking(vector<int> &nums, int startIndex)
    {
        // need allNodes
        if (path.size() > 1)
            res.push_back(path);
        // record of the same level repeated [i]
        // initial =[]
        std::unordered_set<int> usedSet;
        for (int i = startIndex; i < nums.size(); i++)
        {
            // [i] is increasing
            // set includes var ====> set.find(var)!=set.end() >>>>>>'set.end()' such like 'false'
            if (path.size() > 0 && path.back() > nums[i] || usedSet.find(nums[i]) != usedSet.end())
                continue;
            path.push_back(nums[i]);
            usedSet.insert(nums[i]);
            backtracking(nums, i + 1);
            path.pop_back();
            //!:such as 7 changes to 7; 7 is already used,it will pop to changes to 7,but it's forbidden;
            // thus, no erase;
        }
    }

public:
    vector<vector<int>> findSubsequences(vector<int> &nums)
    {
        res.clear();
        path.clear();
        backtracking(nums, 0);
        return res;
    }
};
// For your subsequence problem, omitting the check if (startIndex == nums.size()) { return; } does not cause any issues because:

// The loop inherently prevents out-of-bounds access.
// The structure of your recursion (within the bounds-guarded loop) ensures safe termination.
// the push_back is invoked outside the 'if' statement