#include <stdio.h>
#include <stdlib.h>

int peakIndexInMountainArray(int *A, int ASize);
int main(int argc, char *argv[])
{
    return 0;
}
int peakIndexInMountainArray(int *A, int ASize)
{
    int a;
    int b;
    for (size_t i = 0; i < ASize - 1; ++i)
    {
        a = A[i];
        b = A[i + 1];
        if ((a - b) > 0)
        {
            return i;
        }
    }
    return -1;
}