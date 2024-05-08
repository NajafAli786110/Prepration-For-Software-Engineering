#include <stdio.h>
#include <stdlib.h>

int fabonacci(int size, int *arr)
{
    if (size == 0) {
        return arr[0] = 0;
    }
    if (size == 1) {
        return arr[1] = 1;
    }

    arr[size]= fabonacci(size-1, arr) + fabonacci(size-1, arr);
    return size;
}

int main(void)
{
    int size, res = 0;
    int *arr;
    printf("Enter a size for your Fabonacci series: ");
    scanf("%d", &size);
    arr=(int*)malloc(size * (sizeof(int)));

    fabonacci(size, arr);
    res = arr[size - 1];

    // If user want to print Last Digit of fabonacci
    printf("Last Digit of Fabonacci is %d\n", res);

    // If he want whole array from 0 to 8th of Fabonacci series
    printf("Entered array elements are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;    
}