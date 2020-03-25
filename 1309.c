#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * freqAlphabets(char * s);
int main(int argc, char *argv[])
{
    
    return 0;
}
char * freqAlphabets(char * s){
    char c;
    char characters[17] = {'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
                            't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char *result = (char *)malloc(1001 * sizeof(char));
    char *p = result;
    char *tmp = (char *)malloc(1001 * sizeof(char));
    char *pTmp = tmp;
    char c1;
    char c2;
    for(int i = strlen(s) - 1; i >= 0; --i)
    {
        if((c = s[i]) == '#')
        {
            c1 = s[i - 2];
            c2 = s[i - 1];
            *tmp = characters[(c1 - 0x31) * 10 + (c2 - 0x30)];
            ++tmp;
            i -= 2;
            continue;
        } else {
            *tmp = c + 0x30;
            ++tmp;
        }
    }
    *tmp = '\0';
    for(int i = strlen(pTmp) - 1; i >= 0; --i)
    {
        *(result++) = pTmp[i];
    }
    *result = '\0';
    return p;
}