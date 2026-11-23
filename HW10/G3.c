#include <stdio.h>
#include <string.h>

int main()
{
    FILE *input, *output;
    char s[1003];
    int len;
    int i;
    int first = 1;
    char last;

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    if (input == NULL || output == NULL)
        return 1;

    fgets(s, 1003, input);

    fclose(input);

    len = strlen(s);

    while (len > 0 && (s[len - 1] == '\n' || s[len - 1] == '\r'))
    {
        s[len - 1] = '\0';
        len--;
    }

    if (len > 0)
    {
        last = s[len - 1];

        for (i = 0; i < len - 1; i++)
        {
            if (s[i] == last)
            {
                if (!first)
                    fprintf(output, " ");

                fprintf(output, "%d", i);
                first = 0;
            }
        }
    }

    fclose(output);

    return 0;
}
