#include <vector>
using namespace std;

void merge(vector<int> &unorder, int left, int right, int mid) //@left、right :从哪拿拿哪去
{
    // temporary result
    vector<int> tmp(right - left + 1);
    int k = 0;
    // assumes: 左子数组区间为 [left, mid], 右子数组区间为 [mid+1, right]
    // relationships: postTranverse of 二叉树
    int i = left, j = mid + 1;
    //
    while (i <= mid && j <= right)
    {
        if (unorder[i] < unorder[j])
            tmp[k++] = unorder[i++]; // tmp[k++]=unorder[i];i++
        else
            tmp[k++] = unorder[j++];
    }
    // 要么左边剩下
    while (i <= mid)
    {
        tmp[k++] = unorder[i++];
    }
    // 右
    while (j <= right)
    {
        tmp[k++] = unorder[j++];
    }
    //
    for (k = 0; k <= tmp.size(); k++)
    {
        unorder[left + k] = tmp[k];
    }
}

void mergeSort(vector<int> &unorder, int left, int right)
{
    if (left >= right)
        return;
    int mid = (left + right) / 2;
    mergeSort(unorder, left, mid);
    mergeSort(unorder, mid + 1, right);
    merge(unorder, left, right, mid);
}

// 归并核心：merge