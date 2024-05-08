#include <stdio.h>

void factorial(int num, int pow, int *res)
{
    // Base Case
    if (pow <= 0)
    {
        return;
    }
    
    *res= (*res) * num;
    pow --;

    factorial(num, pow, res);
}

int main()
{
    int num, power = 0;
    int result = 1;
    printf("Enter a Number for factorial: ");
    scanf("%d", &num);
    printf("\n");
    printf("Enter a Number for Power: ");
    scanf("%d", &power);

    factorial(num, power, &result);
    printf("Answer is %d", result);

    return 0;
}