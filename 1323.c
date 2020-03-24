#include <stdio.h>
#include <stdlib.h>

int maximum69Number (int num);
int main(int argc, char *argv[])
{
    maximum69Number(9669);
    return 0;
}
int maximum69Number (int num){
    int nums[4] = {0};
    for (size_t i = 0; i < 4; i++)
    {
        nums[i] = num % 10;
        num /= 10;
    }

    for(int i = 3; i >= 0; --i)
    {
        if(nums[i] == 6)
        {
            nums[i] = 9;
            break;
        }
    }
    
    return nums[3] * 1000 + nums[2] * 100 + nums[1] *10 + nums[0];
}