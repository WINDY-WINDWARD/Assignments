#include <stdio.h>

int main()
{
    char string[27];
    printf("Enter the string: ");
    scanf("%s", &string);
    int i, j;
    int freq[27];

    for (i = 0;string[i] != '\0'; i++)
    {
        freq[i] = 1;
        for (j = i + 1;string[j] != '\0'; j++)
        {
            if (string[i] == string[j])
            {
                freq[i]++;

                //Set string[j] to 0 to avoid printing visited character
                string[j] = '0';
            }
        }
    }

    //Displays the each character and their corresponding frequency
    printf("Characters and their corresponding frequencies\n");
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] != ' ' && string[i] != '0')
            printf("%c-%d\n", string[i], freq[i]);
    }

    return 0;
}