#include <stdio.h>

int main()
{
    int num = 0;
    int power = 0;
    printf("Enter a Number for factorial: ");
    scanf("%d", &num);
    printf("\n");
    printf("Enter a Number for Power: ");
    scanf("%d", &power);
    
    int i = power;
    int ans = num;
    while (i > 1)
    {
        ans = ans * num;
        i--;
    }
    

    printf("Answer is: %d ", ans);
    return 0;
}