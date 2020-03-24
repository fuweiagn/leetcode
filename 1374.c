#include <stdio.h>
#include <stdlib.h>

char * generateTheString(int n);
int main(int argc, char *argv[])
{
    
    return 0;
}
char * generateTheString(int n){
    char *result = malloc((n + 1) * sizeof(char));
    if(n % 2 == 0)
    {
        for (size_t i = 0; i < n - 1; i++)
        {
            *(result + i) = 'g';
        }
        *(result + n - 1) = 'n';
        *(result + n) = '\0';
    } else {
        for (size_t i = 0; i < n; i++)
        {
            *(result + i) = 'g';
        }
        *(result + n) = '\0';
    }
    return result;
}
