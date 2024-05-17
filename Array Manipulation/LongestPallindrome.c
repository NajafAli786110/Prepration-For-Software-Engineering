#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Code for Checking Longest Pallindrome || This Code Written by me But not Working :(

// int main()
// {

//     int num = 0; int max = NULL;

//     // Take Input from User
//     char str[40];
//     printf("Enter a name/space or anything to reverse: ");
//     scanf("%39s", str);

//     int numberOfStrings = strlen(str);

//     // Allocate memory for the array of string pointers
//     char **stringArray = malloc((numberOfStrings / 2) * sizeof(char *));
//     if (stringArray == NULL)
//     {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     // Loop goes to Half of String Length
//     for (int i = 0; i < numberOfStrings / 2; i++)
//     {
//         // Checking If First & Last String is Matched
//         if (str[i] == str[numberOfStrings - 1 - i])
//         {
//             stringArray[num] = str[i];
//         }
//         // If matching Pallindrome End But Loop Running
//         else if (i != 0 && str[i - 1] == str[numberOfStrings - 2 - i])
//         {
//             num++;
//         }
//     }

//     // Print the strings
//     for (int i = 0; i < numberOfStrings; i++)
//     {
//         for (int j = 1; j < numberOfStrings; j++)
//         {
//             if (strlen(stringArray[j]) > strlen(stringArray - i))
//             {
//                 max = j;
//                 break;
//             }
//         }
//     }

//     // Print Longest Pallindrome
//     printf("\nYour Longest pallindrome you entered is: ", stringArray[max]);

//     // Free the allocated memory
//     for (int i = 0; i < numberOfStrings; i++)
//     {
//         free(stringArray[i]);
//     }
//     free(stringArray);

//     return 0;
// }

int isPallindrome(char *str, int start, int end)
{
    while (start < end)
    {
        if (str[start] != str[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    
    return 1;
}

char *longestPallidrome(char *str)
{
    int len = strlen(str);
    int start = 0; int maxLength = 1;

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (isPallindrome(str, i, j) && (j - i + 1) > maxLength)
            {
                start = i;
                maxLength = j - i + 1;
            }
        }
    }

    char *result = malloc((maxLength + 1) * sizeof(char));
    strncpy(result, &str[start], maxLength);
    result[maxLength + 1] = '\0';

    return result;
    
}
int main()
{
    char str[40];
    printf("Enter a string to find the longest palindrome: ");
    scanf("%39s", str);

    char *LargestPallindrome = longestPallidrome(str);
    printf("Your Longest Pallindrome is: %s", LargestPallindrome);

    free(LargestPallindrome);
    return 0;
}