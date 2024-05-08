#include <stdio.h>

void swap(int *a, int *b)
{
    *a = *a + *b; 
    *b = *a - *b; 
    *a = *a - *b; 
}
int main()
{
    int a, b = 0;
    printf("Enter Number 1: ");
    scanf("%d\n", &a);
    printf("Enter Number 2: ");
    scanf("%d\n", &b);


    printf("Before Swap Value of a is: %d. And value of b is: %d\n", a, b);
    swap(&a, &b);
    printf("Before Swap Value of a is: %d. And value of b is: %d", a, b);
    
}