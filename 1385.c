#include <stdio.h>
#include <stdlib.h>

int findTheDistanceValue(int *arr1, int arr1Size, int *arr2, int arr2Size, int d);
int main(int argc, char *argv[])
{

    return 0;
}
int findTheDistanceValue(int *arr1, int arr1Size, int *arr2, int arr2Size, int d)
{
    int num1;
    int num2;
    int flag;
    size_t count = 0;
    for (size_t i = 0; i < arr1Size; i++)
    {
        flag = 1;
        num1 = arr1[i];
        for (size_t j = 0; j < arr2Size; j++)
        {
            num2 = arr2[j];
            if (abs(num1 - num2) <= d)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            ++count;
        }
    }
    return (int)count;
}
