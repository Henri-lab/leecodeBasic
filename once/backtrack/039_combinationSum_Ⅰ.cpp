class Solution
{
private:
    vector<vector<int>> results;
    vector<int> path;
    void backtracking(vector<int> &candidates, int target, int sum, int startIndex)
    {
        // if you not pruning ,would timeError
        for (int i = startIndex; i < candidates.size() && sum + candidates[i] <= target; i++)
        {
            path.push_back(candidates[i]);
            sum += candidates[i];
            backtracking(candidates, target, sum, i);
            sum -= candidates[i];
            path.pop_back();
        }
        // if (sum > target)
        //     return;
        if (sum == target)
        {
            result.push_back(path);
            return;
        }
    }

public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        results.clear();
        path.clear();
        backtracking(candidates, target, 0, 0);
        return results;
    }
}
