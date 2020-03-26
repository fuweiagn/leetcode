#include <stdio.h>
#include <stdlib.h>

int* sumZero(int n, int* returnSize);
int main(int argc, char *argv[])
{
    return 0;
}
int* sumZero(int n, int* returnSize){
    int *result = calloc(n, sizeof(int));
    int num;
    *returnSize = n;
    
    for(int i = 0; i < n/2; ++i)
    {
        num = n/2 - i;
        result[i] = num;
        result[n - i - 1] = -num;
    }
    return result;
}