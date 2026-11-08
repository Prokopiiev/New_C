#include <stdio.h>
#include <inttypes.h>
#define SIZE 5

int Input(int n,int arr[])
{
int i;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    return i;
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


int main()
{

    int arr[SIZE] = {0};
    Input(SIZE, arr);
    printf("%d\n", Min(arr,SIZE));
    return 0;
}

