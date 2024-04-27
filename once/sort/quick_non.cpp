#include <vector>
using namespace std;

void swap(vector<int> &nums, int i, int j)
{
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}
// the precess of findingPivot is sorting
int partition(vector<int> &nums, int left, int right)
{
    int i = left, j = right;
    while (i < j)
    {
        // i and j as close as possible every loop,meanwhile,keep ~
        while (i < j && nums[j] >= nums[left])
            j--;
        while (i < j && nums[i] >= nums[right])
            i++;
        swap(nums, i, j);
    }
    // i and j recover
    swap(nums, left, i);
    return i;
}
void quickSort(vector<int> &unorder, int left, int right)
{
    // just only left 1 elements; '>='可以防止输入参数时输入不合规； or'=='
    if (left >= right)
        return;
    int pivot = partition(unorder, left, right);
    quickSort(unorder, left, pivot - 1);
    quickSort(unorder, pivot + 1, right);
}

// note:pivot is not necessiate as an elements of unorder;