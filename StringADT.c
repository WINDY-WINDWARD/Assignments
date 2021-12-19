#include <stdio.h>

int main()
{
    int choice;
    printf("Make a selection: \n");
    printf("1.)Length \n");
    printf("2.)Concatenate\n");
    printf("3.)Substring \n");
    printf("4.)Compare \n");
    scanf("%d", &choice);
    if (choice == 1)
    {
        char string[100];
        printf("enter the string: \n");
        scanf("%s", string);
        int i;
        for (i = 0; string[i] != '\0'; i++)
            ;
        printf("the length of the string is: %d \n", i);
    }
    if (choice == 2)
    {
        char str1[100];
        printf("enter the First string: \n");
        scanf("%s", str1);
        char str2[100];
        printf("enter the Second string: \n");
        scanf("%s", str2);
        char str3[100];
        int i = 0, j = 0;
        // Insert the first string in the new string
        while (str1[i] != '\0')
        {
            str3[j] = str1[i];
            i++;
            j++;
        }

        // Insert the second string in the new string
        i = 0;
        while (str2[i] != '\0')
        {
            str3[j] = str2[i];
            i++;
            j++;
        }
        str3[j] = '\0';

        // Print the concatenated string
        printf("\nConcatenated string: %s \n", str3);
    }
    if (choice == 3)
    {
        char string[100], sub[100];
        int position, length, c = 0;
        printf("Input a string\n");
        scanf("%s", string);

        printf("Enter the position and length of substring\n");
        scanf("%d%d", &position, &length);

        while (c < length)
        {
            sub[c] = string[position + c - 1];
            c++;
        }
        sub[c] = '\0';

        printf("Required substring is \"%s\"\n", sub); // '\"' to print "

        return 0;
    }
    if (choice == 4)
    {
        char str1[20]; // declaration of char array
        char str2[20]; // declaration of char array
        int value;     // declaration of integer variable
        printf("Enter the first string : ");
        scanf("%s", str1);
        printf("Enter the second string : ");
        scanf("%s", str2);
        // comparing both the strings using strcmp() function
        value = strcmp(str1, str2);
        if (value == 0)
            printf("strings are same");
        else
            printf("strings are not same");
        return 0;
    }

    return 0;
}