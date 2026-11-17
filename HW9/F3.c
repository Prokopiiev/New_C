#include <stdio.h>

void count_digits(char n[])
{
    int count[10] = {0};

    int i = 0;

    while (n[i] != '\0')
    {
        count[n[i] - '0']++;
        i++;
    }

    for (int i = 0; i < 10; i++)
    {
        if (count[i] > 0)
        {
            printf("%d %d\n", i, count[i]);
        }
    }
}

int main()
{
    char n[1001];

    scanf("%1000s", n);

    count_digits(n);

    return 0;
}
