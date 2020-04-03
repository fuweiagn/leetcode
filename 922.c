#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *sortArrayByParityII(int *A, int ASize, int *returnSize);
int main(int argc, char *argv[])
{

    return 0;
}
int *sortArrayByParityII(int *A, int ASize, int *returnSize)
{
    int *ret = (int *)malloc(ASize * sizeof(int));
    *returnSize = ASize;
    size_t p_even = 0;
    size_t p_odd = 1;
    int num;
    for (size_t i = 0; i < ASize; i++)
    {
        num = A[i];
        if (num % 2 == 0)
        {
            ret[p_even] = num;
            p_even += 2;
        }
        else
        {
            ret[p_odd] = num;
            p_odd += 2;
        }
    }
    return ret;
}