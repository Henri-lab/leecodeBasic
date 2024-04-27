
class Solution
{
private:
    const string letterMap[10] = {
        "",     // 0
        "",     // 1
        "abc",  // 2
        "def",  // 3
        "ghi",  // 4
        "jkl",  // 5
        "mno",  // 6
        "pqrs", // 7
        "tuv",  // 8
        "wxyz", // 9
    };
    //
    string path;
    vector<string> result;
    // @digits:such as '243'...
    void backtracking(const string &digits, int index)
    {
        // digits transversing over
        if (digits.size() == index)
        {
            result.push_back(path);
            return;
        }
        int phoneNum = digits[index] - '0';
        string letters = letterMap[phoneNum];
        for (int i = 0; i < letters.size(); i++)
        {
            path.push_back(letters[i]);
            backtracking(digits, index + 1);
            path.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits)
    {
        result.clear();
        path.clear();
        if (digits.size())
        {
            backtracking(digits, 0);
        }
        return result;
    }
};