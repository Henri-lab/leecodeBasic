class Solution
{
private:
    vector<vector<int>> result;
    vector<int> path;
    //@k: quantity limit;@n: targetSum;
    void backtracking(int k, int target, int sum, int startIndex, int height)
    {
        for (int i = startIndex; i < 9; i++)
        {
            path.push_back(i);
            backtracking(k, target, sum + i, i + 1, height + 1);
            path.pop_back();
        }
        if (sum == target && height == k)
        {
            result.push_back(path);
            return;
        }
        // sum seems increasing always
        if (sum > target || height > k)
            return;
    }

public:
    vector<vector<int>> combinationSum3(int k, int n)
    {
        result.clear();
        path.clear();
        backtracking(k, n, 0, 1, 0);
        return result;
    }
};