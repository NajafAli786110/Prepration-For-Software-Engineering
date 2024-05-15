#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char firstUsername[50], SecondUsername[50];

    // Taking name from both of user
    printf("User No 1 Kindly input your First Name: ");
    scanf("%s", firstUsername);
    printf("User No 2 Kindly input your First Name: ");
    scanf("%s", SecondUsername);

    // First check their Name's Length if not same Return false
    int len1=strlen(firstUsername);
    int len2=strlen(SecondUsername);
    if (len1 != len2)
    {
        printf("Your Names are Different");
        return 0;
    }
    
    // Dynamically allocate memory for the string
    char *dynamicString = malloc((strlen(firstUsername) + 1) * sizeof(char)); // +1 for null terminator

    for (int i = 0; i < len1; i++)
    {
        if (firstUsername[i] != SecondUsername[i])
        {
            printf("Your Names are Different");
            return 0;
        }
    }

    printf("\n");
    free(dynamicString);
    printf("You Guys have same Name Wow!");

    return 0;
}
