#include <stdio.h>
#include <stdlib.h>
int solve(int n);
int main(int argc, char *argv[])
{
    return 0;
}
int solve(int n)
{
    //use mod operator
    int digit;
    int sum = 0;
    int prod = 1;
    while (n != 0)
    {
        digit = n % 10;
        sum += digit;
        prod *= digit;
        n /= 10;
    }
    return prod - sum;
}