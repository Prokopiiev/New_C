#include <stdio.h>
#include <string.h>

int main()
{
    FILE *input, *output;
    char s[101];
    int len;

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    fgets(s, 101, input);

    len = strlen(s);

    if (s[len - 1] == '\n')
    {
        s[len - 1] = '\0';
        len--;
    }

    fprintf(output, "%s, %s, %s %d", s, s, s, len);

    fclose(input);
    fclose(output);

    return 0;
}
