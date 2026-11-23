#include <stdio.h>

int main()
{
    FILE *input, *output;
    char s[1002];
    int i;

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    if (input == NULL || output == NULL)
        return 1;

    if (fgets(s, 1002, input) != NULL)
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == 'a')
                s[i] = 'b';
            else if (s[i] == 'b')
                s[i] = 'a';
            else if (s[i] == 'A')
                s[i] = 'B';
            else if (s[i] == 'B')
                s[i] = 'A';
        }

        fputs(s, output);
    }

    fclose(input);
    fclose(output);

    return 0;
}
