#include <stdio.h>
#include <stdlib.h>
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize);
int main(int argc, char *argv[])
{
    return 0;
}
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){
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
