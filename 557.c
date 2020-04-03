#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverseWords(char *s);
int main(int argc, char *argv[])
{

    return 0;
}
char *reverseWords(char *s)
{
    size_t len = strlen(s);
    char *ret = (char *)malloc(len + 1);
    char *p_end = s - 1;
    char *p_start = strchr(s, ' ');
    char *p_start_init = p_start;
    size_t p = 0;
    while (p_start != NULL)
    {
        --p_start;
        while (p_start != p_end)
        {
            ret[p++] = *(p_start--);
        }
        ret[p++] = ' ';
        p_end = p_start_init;
        p_start = strchr(p_start_init + 1, ' ');
        p_start_init = p_start;
    }
    p_start = s + len - 1;
    while (p_start != p_end)
    {
        ret[p++] = *(p_start--);
    }
    ret[p] = '\0';
    return ret;
}
