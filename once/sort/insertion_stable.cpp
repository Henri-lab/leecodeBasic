#include <vector>

void insertionSort(vector<int> &unorder)
{
    for (int i = 1; i <= unorder.size(); i++)
    {
        int base = unorder[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (unorder[j] > base)
            {
                unorder[j + 1] = unorder[j];
                j--;
            }
            unorder[j + 1] = base;
        }
    }
}
// 1.如果前面有一个元素数值大于base，那么base插入其左边：
// 2.如果前面有一个元素数值小于base，那么base插入其右边：
// 实现：1.右copy左move右copy、2.右copy