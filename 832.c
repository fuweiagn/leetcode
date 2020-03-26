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
    int **result = malloc(ASize * sizeof(int*));
    int n;
    for (size_t i = 0; i < ASize; i++)
    {
        *(result + i) = malloc(colSize * sizeof(int));
    }
    if(colSize == 1)
    {
        for (size_t i = 0; i < ASize; i++)
        {
            result[i][0] = !A[i][0];
        }
        
    }
    for (size_t i = 0; i < ASize; i++)
    {
        for (size_t j = 0; j < colSize/2; j++)
        {
            result[i][j] = !A[i][colSize - j - 1];
            result[i][colSize - j - 1] = !A[i][j];
            if(colSize % 2 != 0)
            {
                result[i][colSize/2] = !A[i][colSize/2];
            }
        }
    }
    return result;
}