#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverseString(char StrFunc[])
{
    int len = strlen(StrFunc);
    char temp[len + 1];
    for (int i = 0; i < len ; i++)
    {
        temp[len - 1  - i] = StrFunc[i];
    }
    temp[len] = '\0';
    strcpy(StrFunc, temp);
    
}
int main()
{
    char str[40];
    printf("Enter a name/space or anything to reverse: ");
    scanf("%39s", str);
    

    reverseString(str);
    printf("\n");

    printf("Here's your reversed string is: %s", str);
    printf("\n");
    return 0;
}