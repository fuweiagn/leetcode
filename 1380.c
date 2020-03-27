#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* luckyNumbers (int** matrix, int matrixSize, int* matrixColSize, int* returnSize);
int main(int argc, char *argv[])
{
    
    return 0;
}
int* luckyNumbers (int** matrix, int matrixSize, int* matrixColSize, int* returnSize){
    #define min(a, b) ((a) > (b) ? (a) : (b))
    size_t colSize = *matrixColSize;
    int *result = malloc(min(matrixSize, colSize) * sizeof(int));
    //brute force
    int tmp;
    int max_c;
    int min_r;
    size_t count = 0;

    int rec_r[matrixSize];
    int rec_c[colSize];
    for (size_t i = 0; i < colSize; i++)
    {
        rec_c[i] = matrix[0][i];
    }
    
    for (size_t i = 0; i < matrixSize; i++)
    {
        min_r = matrix[i][0];
        for(size_t j = 0; j < colSize; ++j)
        {
            if((tmp = matrix[i][j]) < min_r)
            {
                min_r = tmp;
            }
            if(tmp > rec_c[j])
            {
                rec_c[j] = tmp;
            }
        }
        rec_r[i] = min_r;
    }
    for (size_t i = 0; i < matrixSize; i++)
    {
        for(size_t j = 0; j < colSize; ++j)
        {
            if ((tmp = rec_r[i]) == rec_c[j])
            {
                result[count] = tmp;
                ++count;
            }
            
        }
    }
    *returnSize = count;
    return result;
}