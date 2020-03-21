#include <stdio.h>
#include <stdlib.h>
int solve(int num);
int main(int argc, char *argv[])
{
    int count;
    int mask = 0x1;

    return 0;
}
int solve(int num)
{
    int count = 0;
    int mask = 0x1;
    while(num != 0) {
        if((num & mask) == 1) {
            --num;
            ++count;
            continue;
        }
        num /= 2;
        ++count;
    }
    return count;
}