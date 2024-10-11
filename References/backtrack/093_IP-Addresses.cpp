#include <string>
#include <vector>
class Solution
{
private:
    // use original string
    std::vector<std::string> res;
    int max = 255;
    bool isValid(const string &s)
    {
        if (s.size() == 0)
            return false;
        if (s[0] == '0' && s.size() > 1)
        {
            return false;
        }
        int num = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] > '9' || s[i] < '0')
                return false;
            // imitate the process reading a number
            num = num * 10 + (s[i] - '0');
            if (num > max)
                return false;
        }
        return true;
    }
    void backtracking(string &s, int startIndex, int pointNum)
    {
        if (startIndex == s.size() || pointNum == 3)
        {
            // the third address is valid
            if (isValid(s.substr(startIndex)))
                res.push_back(s);
            return;
        }
        for (int i = startIndex; i < s.size(); i++)
        {
            std::string sub = s.substr(startIndex, i - startIndex + 1);
            if (isValid(sub))
            {
                s.insert(s.begin() + i + 1, '.');
                pointNum++;
                backtracking(s, i + 2, pointNum);
                s.erase(s.begin() + i + 1);
                pointNum--;
            }
            else
                // continue;
                // if the segment is invalid,then even if the point moved backwards,it must still be invalid
                break;
        }
    }

public:
    vector<string> restoreIpAddresses(string s)
    {
        res.clear();
        // IP size range
        if (s.size() < 4 || s.size() > 12)
            return res;
        backtracking(s, 0, 0);
        return res;
    }
};