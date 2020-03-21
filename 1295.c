#include <stdio.h>
#include <stdlib.h>

int findNumbers(int* nums, int numsSize);
int main(int argc, char *argv[])
{
    
    return 0;
}

int findNumbers(int* nums, int numsSize){
    int n;
    int result = 0;
    for (size_t i = 0; i < numsSize; i++)
    {
        int digitcounts = 0;
        n = nums[i];
        while (n != 0)
        {
            n /= 10;
            ++digitcounts;
        }
        result += ((digitcounts & 1) == 0);
    }
    return result;
}