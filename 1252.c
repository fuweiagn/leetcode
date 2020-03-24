#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int oddCells(int n, int m, int** indices, int indicesSize, int* indicesColSize);
int main(int argc, char *argv[])
{
    
    return 0;
}
int oddCells(int n, int m, int** indices, int indicesSize, int* indicesColSize){
    int matrix[n][m];
    int r;
    int c;
    memset(matrix, 0, n * m * sizeof(int));
    for (size_t i = 0; i < indicesSize; i++)
    {
        r = indices[i][0];
        c = indices[i][1];
        for(int j = 0; j < m; ++j)
        {
            matrix[r][j] += 1;
        }
        for(int k = 0; k < n; ++k)
        {
            matrix[k][c] += 1;
        }
    }
    int count = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            if((matrix[i][j] % 2) != 0)
            {
                ++count;
            }
        }
        
    }
    return count;
}