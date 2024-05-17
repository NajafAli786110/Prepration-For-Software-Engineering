#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Code for Checking Longest Pallindrome

int main()
{

    int num = 0; int max = NULL;

    // Take Input from User
    char str[40];
    printf("Enter a name/space or anything to reverse: ");
    scanf("%39s", str);

    int numberOfStrings = strlen(str);

    // Allocate memory for the array of string pointers
    char **stringArray = malloc((numberOfStrings / 2) * sizeof(char *));
    if (stringArray == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Loop goes to Half of String Length
    for (int i = 0; i < numberOfStrings / 2; i++)
    {
        // Checking If First & Last String is Matched
        if (str[i] == str[numberOfStrings - 1 - i])
        {
            stringArray[num] = str[i];
        }
        // If matching Pallindrome End But Loop Running
        else if (i != 0 && str[i - 1] == str[numberOfStrings - 2 - i])
        {
            num++;
        }
    }

    // Print the strings
    for (int i = 0; i < numberOfStrings; i++)
    {
        for (int j = 1; j < numberOfStrings; j++)
        {
            if (strlen(stringArray[j]) > strlen(stringArray - i))
            {
                max = j;
                break;
            }
        }
    }

    // Print Longest Pallindrome
    printf("\nYour Longest pallindrome you entered is: ", stringArray[max]);

    // Free the allocated memory
    for (int i = 0; i < numberOfStrings; i++)
    {
        free(stringArray[i]);
    }
    free(stringArray);

    return 0;
}
