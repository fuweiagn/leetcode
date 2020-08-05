#include "leetcode.hpp"

int main()
{

    return 0;
}
vector<int> singleNumbers(vector<int> &nums)
{
    int ret = 0;
    for (auto &i : nums)
    {
        ret ^= i;
    }
    // find the one
    int mask = 1;
    while ((mask & ret) == 0)
    {
        mask <<= 1;
    }

    int num1 = 0;
    int num2 = 0;
    // divide nums
    for (auto &i : nums)
    {
        if (mask & i)
        {
            num1 ^= i;
        }
        else
        {
            num2 ^= i;
        }
    }

    return {num1, num2};
}