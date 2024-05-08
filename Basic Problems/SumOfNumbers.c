// In this program we have to find the sum of a given number
// For Example: Given number is 2309
// Answer is = 2 + 3 + 0 + 9 = 14


#include <stdio.h>

int findingSum(int a)
{
    int finalAns = 0;

    while (a >= 1)
    {
        finalAns= finalAns + (a % 10);
        a = a / 10;
    }

    return finalAns;
    
}
int main()
{
    int a = 0;
    printf("Enter Number: ");
    scanf("%d", &a);

    int Ans = findingSum(a);
    printf("Your Answer is: %d", Ans);

    return 0;
}