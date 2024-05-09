#include <stdio.h>
#include <string.h>

int main()
{
    char *Str; int i;
    printf("Enter your string here: ");
    scanf("%s", Str);

    for (i = 0; Str[i] != '\0'; i++);
    printf("Your length of String is: %d", i);
    
    return 0;
}