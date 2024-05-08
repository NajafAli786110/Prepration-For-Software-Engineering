#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number, We check if its prime or not: ");
    scanf("%d", &num);
    printf("\n");
    
    if (num==0 || num==1) printf("%d number is not a Prime number", num);
    else if(num == 2) printf("%d number is a Prime number", num);
    else if (num > 2 && num % 2 != 0) printf("%d number is a Prime number", num);
    else printf("%d number is not a Prime number", num);
    return 0;
}