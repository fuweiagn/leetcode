#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int repeatedNTimes(int* A, int ASize);
int main(int argc, char *argv[])
{
    
    return 0;
}
int repeatedNTimes(int* A, int ASize){
    int *tmp = calloc(10000, sizeof(int));
    int num;
    for (size_t i = 0; i < ASize; i++)
    {
        num = A[i];
        ++tmp[num];
        if(tmp[num] == 2)
        {
            return num;
        }
    }
    return 0;
}
