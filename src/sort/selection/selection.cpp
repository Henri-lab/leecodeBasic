#include <vector>
#include <iostream>

using namespace std;

void selectionSort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        int k = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[k])
                k = j;
        }
        swap(nums[i], nums[k]);
    }
}

int main()
{
    vector<int> nums = {5, 3, 8, 2, 1, 9, 4};
    selectionSort(nums);
    for (int num : nums)
    {
        cout << num << " ";
    }
    return 0;
}