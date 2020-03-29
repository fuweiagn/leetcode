#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int repeatedNTimes(int* A, int ASize);
int main(int argc, char *argv[])
{
    
    return 0;
}
int repeatedNTimes(int* A, int ASize){
    for (size_t i = 0; i < ASize - 2; i++)
    {
        if (A[i] == A[i + 1] || A[i] == A[i + 2])
        {
            return A[i];
        }
    }
    return A[ASize - 1];
}
