#include "leetcode.hpp"

int main()
{

    return 0;
}
vector<vector<int>> findContinuousSequence(int target)
{
    vector<vector<int>> ret;
    vector<int> one;
    for (int i = 1, j = 1; i <= j && (j <= (target + 1) / 2);)
    {
        int sum = (i + j) * (j - i + 1) / 2;
        if (sum < target)
        {
            j++;
        }
        else if (sum > target)
        {
            i++;
        }
        else
        {
            for (int k = i; k <= j; k++)
            {
                one.push_back(k);
            }
            ret.push_back(one);
            one.clear();
            i += 2;
            j++;
        }
    }

    return ret;
}