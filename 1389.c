#include <stdio.h>
#include <stdlib.h>

int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize);
int main(int argc, char *argv[])
{
    
    return 0;
}
int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize){
    int *target = malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    int num;
    int idx;
    for (size_t i = 0; i < numsSize; i++)
    {
        num = nums[i];
        idx = index[i];
        if (idx != i)
        {
            for(size_t j = i; j > idx; --j)
            {
                target[j] = target[j - 1];
            }
            target[idx] = num;
            continue;
        }
        target[idx] = num;
    }
    return target;
}