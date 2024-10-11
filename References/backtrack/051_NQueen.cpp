#include <vector>
#include <string>
using namespace std;
class Solution
{
private:
    vector<vector<string>> res;

    // backtracking 的策略是一行放一个Q
    // 所以invalid 来源 列，对角，
    // @chess:记录被放置过的chess
    isValid(int row, int col, vector<string> &chess, int n)
    {
        // column
        for (int i = 0; i < row; i++)
        {
            if (chess[i][col] == 'Q')
                return false;
        }
        // +diagnal
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        {
            if (chess[i][j] == 'Q')
                return false;
        }
        // -diagnal
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
        {
            if (chess[i][j] == 'Q')
                return false;
        }
        return true;
    }
    void backtracking(int num, int row, vector<string> &chess)
    {
        if (row == num)
        {
            res.push_back(chess);
            return;
        }
        for (int col = 0; col < num; col++)
        {
            if (isValid(row, col, chess, num)){
                chess[row][col] = 'Q';
                backtracking(num, row + 1, chess);
                chess[row][col] = '.';
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n)
    {
        res.clear();
        vector<string> chess(n, string(n, '.'));
        backtracking(n, 0, chess);
        return res;
    }
};