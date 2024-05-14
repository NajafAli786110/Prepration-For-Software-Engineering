#include <stdio.h>

int main()
{
    int n=30;int *ptr;int **ptr1;
    ptr=&n; ptr1=&ptr;
    printf("The Value of Variable is : %d", **ptr1);
}
