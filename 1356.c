#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *sortByBits(int *arr, int arrSize, int *returnSize);
int main(int argc, char *argv[])
{

    return 0;
}
int compare_bits(const void *a, const void *b)
{
    size_t count_a = 0;
    size_t count_b = 0;
    for (int val = *(const int *)a; val > 0; val >>= 1)
    {
        count_a += val & 0x1;
    }
    for (int val = *(const int *)b; val > 0; val >>= 1)
    {
        count_b += val & 0x1;
    }
    if (count_b == count_a)
        return *(const int *)a - *(const int *)b;
    return count_a - count_b;
}
int *sortByBits(int *arr, int arrSize, int *returnSize)
{
    *returnSize = arrSize;
    qsort(arr, arrSize, sizeof(int), compare_bits);
    return arr;
}