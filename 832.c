#include <stdio.h>
#include <stdlib.h>

int** flipAndInvertImage(int** A, int ASize, int* AColSize, int* returnSize, int** returnColumnSizes);
int main(int argc, char *argv[])
{
    
    return 0;
}
int** flipAndInvertImage(int** A, int ASize, int* AColSize, int* returnSize, int** returnColumnSizes){
    *returnSize = ASize;
    *returnColumnSizes = AColSize;
    int colSize = *AColSize;
    int tmp;
    for (size_t i = 0; i < ASize; i++)
    {
        for (size_t j = 0; j < (colSize + 1) / 2; j++)
        {
            tmp = A[i][j];
            A[i][j] = A[i][colSize - 1 - j] ^ 1;
            A[i][colSize - 1 - j] = tmp ^ 1;
        }
    }
    return A;
}