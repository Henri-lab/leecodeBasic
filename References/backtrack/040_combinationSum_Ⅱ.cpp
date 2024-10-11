class Solution
{
private:
    vector<vector<int>> result;
    vector<int> path;
    void backtracking(vector<int> &candidates, int target, int sum, int startIndex)
    {
        if (sum == target)
        {
            result.push_back(path);
            return;
        }
        for (int i = startIndex; i < candidates.size() && sum + candidates[i] <= target; i++)
        {
            // duplicate
            if (i > startIndex && candidates[i] == candidates[i - 1])
            {
                continue;
            }
            //
            sum += candidates[i];
            path.push_back(candidates[i]);
            backtracking(candidates, target, sum, i + 1); // i+1⭕/i++❌
            sum -= candidates[i];
            path.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        result.clear();
        path.clear();
        // duplication before:sort!!!
        // *[i]==*[i-1]
        sort(candidates.begin(), candidates.end());
        backtracking(candidates, target, 0, 0);
        return result;
    }
};