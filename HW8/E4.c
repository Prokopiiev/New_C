#include <stdio.h>
#include <inttypes.h>
#define SIZE 10

int Input(int n, int arr[])
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    return i;
}

int SumMax(int len, int arr[])
{
    int max1 = arr[0];
    int max2 = arr[1];
    
    if (max2 > max1)
    {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }
    
    for (int i = 2; i < len; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
        {
            max2 = arr[i];
        }
    }
    return max1 + max2;
}

int main()
{
    int arr[SIZE] = {0};
    Input(SIZE, arr);
    printf("%d", SumMax(SIZE, arr));
    
    return 0;
    
}
