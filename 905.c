#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int* sortArrayByParity(int* A, int ASize, int* returnSize);
int main(int argc, char *argv[])
{
    
    return 0;
}
int* sortArrayByParity(int* A, int ASize, int* returnSize){
    int *result = malloc(ASize * sizeof(int));

    size_t l = 0;
    size_t r = ASize - 1;

    int num;
    for (size_t i = 0; i < ASize; i++)
    {
        num = A[i];
        if(num % 2 == 0)
        {
            result[l] = num;
            ++l;
        } else
        {
            result[r] = num;
            --r;
        }
    }
    *returnSize = ASize;
    return result;
}
