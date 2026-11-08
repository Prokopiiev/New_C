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


double Average(int len, int arr[])
{
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
        
    return (double)sum / len;

}



int main()
{

    int arr[SIZE] = {0};
    Input(SIZE, arr);
    printf("%.3f", Average(SIZE, arr));
    return 0;
}
