#include <stdio.h>
#include <stdlib.h>

int* sumZero(int n, int* returnSize);
int main(int argc, char *argv[])
{
    return 0;
}
int* sumZero(int n, int* returnSize){
    int *result = malloc(n * sizeof(int));
    *returnSize = n;
    int frontp;
    int midp;
    int endp;
    int i = 1;
    if(n % 2 == 0)
    {
        for(frontp = n/2 - 1, endp = n/2; frontp >= 0; --frontp, ++endp)
        {
            result[frontp] = -i;
            result[endp] = i;
            ++i;
        }
    } else
    {
        midp = n/2;
        result[midp] = 0;
        for(frontp = midp - 1, endp = midp + 1; frontp >= 0; --frontp, ++endp)
        {
            result[frontp] = -i;
            result[endp] = i;
            ++i;
        }
    }
    return result;
}