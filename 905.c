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
    int *odd= malloc(ASize * sizeof(int));
    int *even= malloc(ASize * sizeof(int));

    size_t count_odd = 0;
    size_t count_even = 0;

    int num;
    for (size_t i = 0; i < ASize; i++)
    {
        num = A[i];
        if(num % 2 == 0)
        {
            even[count_even] = num;
            ++count_even;
        } else
        {
            odd[count_odd] = num;
            ++count_odd;
        }
    }
    memcpy(result, even, count_even * sizeof(int));
    memcpy(result + count_even, odd, count_odd * sizeof(int));
    *returnSize = ASize;
    return result;
}
