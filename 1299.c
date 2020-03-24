#include <stdio.h>
#include <stdlib.h>

int* replaceElements(int* arr, int arrSize, int* returnSize);
int main(int argc, char *argv[])
{
    
    return 0;
}
int* replaceElements(int* arr, int arrSize, int* returnSize){
    int num;
    int max = -1;
    for (int i = arrSize - 1; i >= 0 ; --i)
    {
        num = arr[i];
        arr[i] = max;
        max = (num > max ? num : max);
    }
    *returnSize = arrSize;
    return arr;
}