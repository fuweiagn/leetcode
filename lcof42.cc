#include "leetcode.hpp"

int main()
{

    return 0;
}
int maxSubArray(vector<int> &nums)
{
    int curr;
    int front = nums[0];
    int max = front;

    for (int i = 1; i < nums.size(); i++) {
        curr = nums[i];
        if (front > 0) curr = front + curr; 
        if (curr > max) max = curr;
        front = curr;
    }

    return max;
}