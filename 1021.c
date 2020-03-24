#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * removeOuterParentheses(char * S);
int main(int argc, char *argv[])
{
    
    return 0;
}
char * removeOuterParentheses(char * S){
    char *result = malloc(10001 * sizeof(char));
    char *p = result;
    int l = 0;
    int r = 0;
    char *front;
    char c;
    size_t count = 0;
    while ((c = *S) != '\0')
    {
        if(c == '(')
        {
            if(l == 0)
            {
                ++l;
                ++count;
                front = S;
            } else {
                ++l;
                ++count;
            }
            ++S;
            continue;
        } else {
            ++r;
            ++count;
            if(l == r)
            {
                count -= 2;
                if(count == 0) {

                } else {
                    ++front;
                    memcpy(result, front, count);
                    result += count;
                }
                count = 0;
                l = 0;
                r = 0;
            }
            ++S;
            continue;
        }
    }
    *result = '\0';
    return p;
}