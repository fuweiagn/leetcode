#include <stdio.h>
#include <stdlib.h>

int balancedStringSplit(char * s);
int main(int argc, char *argv[])
{
    
    return 0;
}

int balancedStringSplit(char * s){
    int r = 0;
    int l = 0;
    int result = 0;
    while (*s != '\0')
    {
        if (*s == 'R')
        {
            ++r;
        } else
        {
            ++l;
        }
        ++s;
        if (l == r)
        {
            ++result;
        }
    }
    return result;
}