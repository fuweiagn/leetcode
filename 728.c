#include <stdio.h>
#include <stdlib.h>

int* selfDividingNumbers(int left, int right, int* returnSize);
int main(int argc, char *argv[])
{
    
    return 0;
}
int* selfDividingNumbers(int left, int right, int* returnSize){
    int num;
    int digit;
    size_t count = 0;
    int flag = 0;
    int *result = malloc((right - left + 1) * sizeof(int));
    for(size_t i = left; i <= right; ++i)
    {
        num = i;
        while(num != 0)
        {
            digit = num % 10;
            if((digit == 0) || (i % digit != 0))
            {
                flag = -1;
                break;
            }
            num /= 10;
        }
        if(flag == 0)
        {
            result[count] = i;
            ++count;
        } else
        {
            flag = 0;
        }
    }
    *returnSize = count;
    return result;
}