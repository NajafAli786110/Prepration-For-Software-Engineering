#include <stdio.h>
#include <stdlib.h>
#define arrSize 8

void ReverseFunc(int *arrFunc)
{
    int temp[arrSize] = {0};
    for (int i = arrSize - 1; i >= 0; i--)
    {
        temp[arrSize - i - 1] = *(arrFunc + i);
    }

    for (int i = 0; i < arrSize; i++)
    {
        *(arrFunc + i) = temp[i];
    }
}

int main(void)
{
    int arr[arrSize] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *ptrArr = arr;

    ReverseFunc(ptrArr);

    // Printing the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < arrSize; i++)
    {
        printf("%d ", *(ptrArr + i));
    }
    printf("\n");

    return 0;
}
