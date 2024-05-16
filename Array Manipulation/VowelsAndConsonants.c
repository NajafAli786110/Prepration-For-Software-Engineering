#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int *VowelAndConso(char str[])
{
    int ans[2] = {0};
    int i = 0;
    int len = strlen(str);
    printf("%d\n", len);
    char VU[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    while (i < len)
    {
        for (int j = 0; j < 10; j++)
        {
            if (str[i] == VU[j])
            {
                ans[0]++;
                break;
            }
            else if (str[i] != '\0' && isalpha(str[i]))
            {
                ans[1]++;
                break;
            }
        }

        i++;
    }
    return ans;
}
int main()
{
    char str[40];
    printf("Enter a name/space or anything to reverse: ");
    scanf("%39s", str);

    int *ans = VowelAndConso(str);
    printf("You've %d of vowels and %d of consonants", ans[0], ans[1]);

    return 0;
}