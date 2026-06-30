#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], word[50], longest[50];
    int i = 0, j = 0, max = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    while(1)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            word[j] = '\0';

            if(j > max)
            {
                max = j;
                strcpy(longest, word);
            }

            j = 0;

            if(str[i] == '\0')
                break;
        }
        else
        {
            word[j++] = str[i];
        }

        i++;
    }

    printf("Longest Word = %s", longest);

    return 0;
}