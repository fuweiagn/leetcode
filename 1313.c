#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    return 0;
}
int* decompressRLElist(int* nums, int numsSize, int* returnSize){
    int len = 0;
    for (size_t i = 0; i < numsSize; i+=2)
    {
        len += nums[i];
    }
    *returnSize = len;
    int *result = malloc(len * sizeof(int));
    int freq;
    int val;
    int p = 0;
    for (size_t i = 0; i < numsSize; i+=2)
    {
        freq = nums[i];
        val = nums[i+1];
        for (size_t i = 0; i < freq; i++)
        {
            result[p] = val;
            ++p;
        }
    }
    return result;
}