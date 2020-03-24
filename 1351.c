#include <stdio.h>
#include <stdlib.h>

int countNegatives(int** grid, int gridSize, int* gridColSize);
int main(int argc, char *argv[])
{
    
    return 0;
}
int countNegatives(int** grid, int gridSize, int* gridColSize){
    int count = 0;
    size_t c = *gridColSize;
    size_t r = gridSize;
    for (size_t i = 0; i < r; i++)
    {
        for (size_t j = 0; j < c; ++j)
        {
            if(grid[i][j] < 0)
            {
                count += (c - j) * (r - i);
                c = j;
                break;
            }
        }
    }
    return count;
}