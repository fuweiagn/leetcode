#include <stdio.h>
#include <stdlib.h>
int *solve(int *num, int numsSize, int *returnSize);
int main(int argc, char *argv[])
{
    int nums[4];
    nums[0] = 6;
    nums[1] = 5;
    nums[2] = 4;
    nums[3] = 8;
    int returnSize;
    int *result = solve(nums, 4, &returnSize);
    for (size_t i = 0; i < 4; i++)
    {
        printf("%d", result[i]);
    }
    
    return 0;
}
int *solve(int *nums, int numsSize, int *returnSize)
{
    int *result = malloc(numsSize * sizeof(int));
    int count[101] = {0};
    for (size_t i = 0; i < numsSize; i++)
    {
        ++count[nums[i]];
    }
    for (size_t i = 1; i < 101; i++)
    {
        count[i] += count[i-1];
    }
    for (size_t i = 0; i < numsSize; i++)
    {
        if(nums[i] == 0)
        {
            result[i] = 0;
        } else {
            result[i] = count[nums[i]-1];
        }
    }
    *returnSize = numsSize;
    return result;
}