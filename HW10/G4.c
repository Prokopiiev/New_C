#include <stdio.h>

int main()
{
    FILE *input, *output;

    char word1[101];
    char word2[101];

    int count1[26] = {0};
    int count2[26] = {0};

    int i;
    int first = 1;

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    if (input == NULL || output == NULL)
        return 1;

    fscanf(input, "%100s %100s", word1, word2);

    fclose(input);

    for (i = 0; word1[i] != '\0'; i++)
    {
        count1[word1[i] - 'a']++;
    }

    for (i = 0; word2[i] != '\0'; i++)
    {
        count2[word2[i] - 'a']++;
    }

    for (i = 0; i < 26; i++)
    {
        if (count1[i] == 1 && count2[i] == 1)
        {
            if (first == 0)
                fprintf(output, " ");

            fprintf(output, "%c", 'a' + i);

            first = 0;
        }
    }

    fclose(output);

    return 0;
}
