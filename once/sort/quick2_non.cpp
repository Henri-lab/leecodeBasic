#include <vector>


void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int medianValueIndex(vector<int> &nums int left, int right, int mid)
{
    int l = nums[left], r = nums[right], m = nums[mid];
    if ((l <= m && m <= r) || (r <= m && m <= l))
        return mid; // m 在 l 和 r 之间
    if ((m <= l && l <= r) || (r <= l && l <= m))
        return left; // l 在 m 和 r 之间
    return right;    // r 在 m 和 l 之间
}

int partition(vector<int> &unorder, int left, int right)
{
    int mvi = medianValueIndex(unorder, left, right, (left + right) / 2);
    // 将median交换至数组left处
    swap(unorder[left], unorder[mvi]);
    // unorder has been a 'good' unorder;
    int i = left, j = right;
    while (i <= j)
    {
        while (i < j && unorder[i] <= unorder[right])
        {
            i++;
        }
        while (i < j && unorder[j] >= unorder[left])
        {
            j--;
        }
        if (i < j)
        {
            swap(unorder[i], unorder[j]);
        }
    }
    swap(unorder[left], unorder[j]);
    return j;
}

void quickSort(vector<int> &unorder, int left, int right)
{
    if (left < right)
    {
        int pivot = partition(unorder, left, right);
        quickSort(unorder, left, pivot - 1);
        quickSort(unorder, pivot + 1, right);
    }
    else
        return;
}