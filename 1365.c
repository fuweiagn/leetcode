#include <stdio.h>
#include <stdlib.h>
int *solve(int *num, int numsSize, int *returnSize);
int main(int argc, char *argv[])
{
    static int nums[4];
    nums[0] = 6;
    nums[1] = 5;
    nums[2] = 4;
    nums[3] = 8;
    int *result = solve(nums, 4, nums);
    for (size_t i = 0; i < 4; i++)
    {
        printf("%d", result[i]);
    }
    
    return 0;
}
int *solve(int *nums, int numsSize, int *returnSize)
{
    int count[101] = {0};
    int *result = calloc(numsSize, sizeof(int));
    for (size_t i = 0; i < numsSize; i++)
    {
        int current = nums[i];
        int currentCont = count[current];
        if(currentCont != 0) {
            result[i] = currentCont;
            continue;
        }
        for (size_t i = 0; i < numsSize; i++)
        {
            if (nums[i] < current)
            {
                ++currentCont;
            }
        }
        count[current] = currentCont;
        result[i] = currentCont;
    }
    *returnSize = numsSize;
    return result;
}