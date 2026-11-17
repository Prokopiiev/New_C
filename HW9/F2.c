#include <stdio.h>

void sort_even_odd(int n, int a[])
{
    int b[n];
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[j] = a[i];
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            b[j] = a[i];
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
}
