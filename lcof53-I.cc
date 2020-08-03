#include "leetcode.hpp"

int main()
{

    return 0;
}
int search(vector<int> &nums, int target)
{
    int i = 0;
    int j = nums.size() - 1;
    // find the right bound
    while (i <= j)
    {
        int m = (j + i) / 2;
        if (nums[m] <= target)
            i = m + 1;
        else
            j = m - 1;
    }
    int right = i;
    if (j >= 0 && nums[j] != target)
        return 0;

    // find the left bound
    i = 0;
    j = nums.size() - 1;
    while (i <= j)
    {
        int m = (j + i) / 2;
        if (nums[m] < target)
            i = m + 1;
        else
            j = m - 1;
    }
    int left = j;

    return right - left - 1;
}