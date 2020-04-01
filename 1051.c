#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int heightChecker(int *heights, int heightsSize);
int main(int argc, char *argv[])
{

    return 0;
}
int compare_ints(const void *a, const void *b);
int compare_ints(const void *a, const void *b)
{
    int arg1 = *(const int *)a;
    int arg2 = *(const int *)b;
    if (arg1 > arg2)
        return 1;
    if (arg1 < arg2)
        return -1;
    return 0;
}
int heightChecker(int *heights, int heightsSize)
{
    size_t count = 0;
    int *a = malloc(heightsSize * sizeof(int));
    memcpy(a, heights, heightsSize * sizeof(int));
    qsort(heights, heightsSize, sizeof(int), compare_ints);
    for (size_t i = 0; i < heightsSize; i++)
    {
        if (a[i] != heights[i])
        {
            ++count;
        }
    }
    return count;
}