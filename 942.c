#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* diStringMatch(char * S, int* returnSize);
int main(int argc, char *argv[])
{
    
    return 0;
}
int* diStringMatch(char * S, int* returnSize){
    int h = strlen(S);
    int *result = malloc((h+1) * sizeof(int));
    *returnSize = h + 1;
    int l = 0;
    char c;
    int p = 0;
    while ((c = *S) != '\0')
    {
        if (c == 'I')
        {
            result[p] = l;
            ++l;
        } else
        {
            result[p] = h;
            --h;
        }
        ++p;
        ++S;
    }
    result[p] = l;
    return result;
}