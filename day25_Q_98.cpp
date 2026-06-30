#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j, found;

    printf("Enter First String: ");
    scanf("%s", str1);

    printf("Enter Second String: ");
    scanf("%s", str2);

    printf("Common Characters: ");

    for(i = 0; str1[i] != '\0'; i++)
    {
        found = 0;

        for(j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
            {
                found = 1;
                break;
            }
        }

        if(found)
            printf("%c ", str1[i]);
    }

    return 0;
}