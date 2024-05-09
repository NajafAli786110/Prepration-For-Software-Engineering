#include <stdio.h>

int main()
{
    int x_val = 56;
    int y_val=24;
    int *x = &x_val;
    int *y = &y_val;
    int z = x + *y;
    printf("Your Answer is: %d", z);

    return 0;
}