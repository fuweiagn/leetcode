#include <stdio.h>
#include <stdlib.h>

int* sortedSquares(int* A, int ASize, int* returnSize);
int main(int argc, char *argv[])
{
    
    return 0;
}
int* sortedSquares(int* A, int ASize, int* returnSize){
    int *result = malloc(ASize * sizeof(int));
    *returnSize = ASize;
    int nf;
    int ne;
    int f;
    int e;
    int p = ASize - 1;
    for(f = 0, e = ASize - 1; f <= e; --p)
    {
        if ((nf = -A[f]) > (ne = A[e]))
        {
            result[p] = nf * nf;
            ++f;
        } else
        {
            result[p] = ne * ne;
            --e;
        }
    }
    return result;
}
