#include <stdio.h>
#include <stdlib.h>
char *solve(char *input);
int main(int argc, char *argv[])
{
    char *addr = malloc (8 * sizeof(char));
    *addr = '1';
    *(addr+1) = '.';
    *(addr+2) = '1';
    *(addr+3) = '.';
    *(addr+4) = '1';
    *(addr+5) = '.';
    *(addr+6) = '1';
    *(addr+7) = '\0';
    printf("%s", solve(addr));
    return 0;
}
char *solve(char *address)
{
    char *result = calloc(22, sizeof(char));
    char *p = result;
    while(*address != '\0') {
        if(*address == '.') {
            *result = '[';
            ++result;
            *result = '.';
            ++result;
            *result = ']';
            ++result;
            ++address;
        }
        *result = *address;
        ++result;
        ++address;
    }
    *result = '\0';
    return p;
}