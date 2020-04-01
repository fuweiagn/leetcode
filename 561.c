#include <stdio.h>
#include <stdlib.h>

int arrayPairSum(int* nums, int numsSize);
int main(int argc, char *argv[])
{
    
    return 0;
}
int compare_ints(const void *a, const void *b);
int compare_ints(const void *a, const void *b)
{
    int arg1 = *(const int *)a;
    int arg2 = *(const int *)b;
    if(arg1 > arg2) return 1;
    if(arg1 < arg2) return -1;
    return 0;
}

int arrayPairSum(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), compare_ints);
    int ret = 0;
    for (size_t i = 0; i < numsSize; i+=2)
    {
        ret += nums[i];
    }
    return ret; 
}
