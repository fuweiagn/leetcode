#include <stdio.h>
#include <stdlib.h>

int hammingDistance(int x, int y);
int main(int argc, char *argv[])
{
    
    return 0;
}
int hammingDistance(int x, int y){
    size_t count = 0;
    for(int val = x ^ y; val > 0; val >>= 1)
    {
        if(val & 1)
        {
            ++count;
        }
    }
    return count;
}