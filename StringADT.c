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
    }
    if (choice == 4)
    {
        char str1[100];
        char str2[100];
        int value;
        printf("Enter the first string : ");
        scanf("%s", str1);
        printf("Enter the second string : ");
        scanf("%s", str2);
        int flag = 0, i = 0;
        while (str1[i] != '\0' && str2[i] != '\0') // comparing strings while checking for termination(end of line)
        {
            if (str1[i] != str2[i])
            {
                flag = 1;
                break;
            }
            i++;
        }
        if (flag == 0)
            printf("strings are same\n");
        else
            printf("strings are not same\n");
        return 0;
    }

    return 0;
}