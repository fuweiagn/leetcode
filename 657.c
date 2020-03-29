#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool judgeCircle(char * moves);
int main(int argc, char *argv[])
{
    
    return 0;
}
bool judgeCircle(char * moves){
    size_t up = 0;
    size_t down = 0;
    size_t left = 0;
    size_t right = 0;
    char c;
    while ((c = *moves) != '\0')
    {
        ++moves;
        if (c == 'U')
        {
            ++up;
            continue;
        }
        if (c == 'D')
        {
            ++down;
            continue;
        }
        if (c == 'L')
        {
            ++left;
            continue;
        }
        if (c == 'R')
        {
            ++right;
            continue;
        }
    }
    if(up == down && left == right)
    {
        return true;
    } else
    {
        return false;
    }
    
    
}
