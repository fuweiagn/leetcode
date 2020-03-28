#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int* sortArrayByParity(int* A, int ASize, int* returnSize);
int main(int argc, char *argv[])
{
    
    return 0;
}
int* sortArrayByParity(int* A, int ASize, int* returnSize){
    #define swap(p1, p2) int tmp = *p1; \
    *p1 = *p2; \
    *p2 = tmp; 
    int *s = A;
    int *e = A + ASize - 1;
    while (s < e)
    {
        if(*s % 2 == 1)
        {
            swap(s, e);
            --e;
        } else
        {
            ++s;
        }
    }
    *returnSize = ASize;
    return A;
}
