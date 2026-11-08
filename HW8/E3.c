#include <stdio.h>
#include <inttypes.h>
#define SIZE 10

int Input(int n,int arr[])
{
int i;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    return i;
}

int Max(int *arr,int len)
{
    int max=arr[0],i;
    for (i = 1; i < len; i++)
    {   
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int PosMax(int *arr, int len)
{
    int max=arr[0],i, pos = 1;
    for (i = 1; i < len; i++)
    {   
        if (max < arr[i])
        {
            max = arr[i];
            pos = i + 1;
        }
    }
    return pos;
}

int Min(int *arr,int len)
{
    int min=arr[0],i;
    for (i = 1; i < len; i++)
    {   
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}


int PosMin(int *arr, int len)
{
    int min=arr[0],i, pos = 1;
    for (i = 1; i < len; i++)
    {   
        if (min > arr[i])
        {
            min = arr[i];
            pos = i + 1;
        }
    }
    return pos;
}


int main()
{

    int arr[SIZE] = {0};
    Input(SIZE, arr);
    printf(" %d", PosMax(arr,SIZE));
    printf(" %d", Max(arr,SIZE));
    printf(" %d", PosMin(arr,SIZE));
    printf(" %d", Min(arr,SIZE));
    
    return 0;
}
