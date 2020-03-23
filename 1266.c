#include <stdio.h>
#include <stdlib.h>

int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize);
int main(int argc, char *argv[])
{
    
    return 0;
}
int minTimeToVisitAllPoints(int** points, int pointsSize, 
int* pointsColSize){
    int result = 0;
    int x;
    int y;
    *pointsColSize = 2;
    for (size_t i = 0; i < pointsSize - 1; i++)
    {
        int *p2 = points[i + 1];
        int *p1 = points[i];
        x = abs(p2[0] - p1[0]);
        y = abs(p2[1] - p1[1]);
        result += x < y ? y : x;
    }
   return result; 
}