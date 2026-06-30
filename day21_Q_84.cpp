#include <stdio.h>

int main()
{
    char str[100];
    int i, words = 1;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            words++;
    }

    printf("Total Words = %d", words);

    return 0;
}