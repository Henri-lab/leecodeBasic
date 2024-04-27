class Solution
{
private:
    vector<vector<string>> res;
    vector<string> path;
    bool isPalindrome(const string &s)
    {
        for (int i = 0; i < s.size() / 2; i++)
        {
            if (s[i] != s[s.size() - 1 - i])
            {
                return false;
            }
        }
        return true;
    }
    void backtracking(const string &s, int startIndex)
    {
        if (startIndex == s.size())
        {
            res.push_back(path);
            return;
        }
        for (int i = startIndex; i < s.size(); i++)
        {
            // is palindrome?
            if (isPalindrome(s.substr(startIndex, i - startIndex + 1)))
            {
                path.push_back(s.substr(startIndex, i - startIndex + 1));
                backtracking(s, i + 1);
                path.pop_back();
            }
            else
                continue;
        }
    }

public:
    vector<vector<string>> partition(string s)
    {
        res.clear();
        path.clear();
        backtracking(s, 0);
        return res;
    }
};