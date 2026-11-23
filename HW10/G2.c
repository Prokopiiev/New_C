#include <stdio.h>

int main()
{
    FILE *input, *output;
    int N;
    int i;

    char s[27];

    char letter = 'A';
    char digit = '2';

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    fscanf(input, "%d", &N);

    for (i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            s[i] = letter;
            letter++;
        }
        else
        {
            s[i] = digit;
            digit += 2;

            if (digit > '8')
            {
                digit = '2';
            }
        }
    }

    s[N] = '\0';

    fprintf(output, "%s", s);

    fclose(input);
    fclose(output);

    return 0;
}
