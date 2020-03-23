#include <stdio.h>
#include <stdlib.h>

char * toLowerCase(char * str);
int main(int argc, char *argv[])
{
    
    return 0;
}
char * toLowerCase(char * str){
    char *p = str;
    char c;
    while ((c = *str) != '\0')
    {
        if (c <= 'Z' && c >= 'A')
        {
            *str += 0x20;
        }
        ++str;
    }
    return p;
}
