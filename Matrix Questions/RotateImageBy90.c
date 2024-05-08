#include <stdio.h>
#define R 4
#define C 4

int main()
{
    int arr[R][C];
    int row, col = 0;

    // Getting Data from user
    for (int i = 0; i < C; i++)
    {
        printf("Enter Number for Column %d\n", i);
        for (int j = 0; j < R; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Printing Before Rotate
    printf("Before Rotating \n");
    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < R; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Rotating an Array
    int temp[R][C];
    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < R; j++)
        {
            temp[j][R - i - 1] = arr[i][j];
        }
    }

    // Copy Element from Temp to Arr
    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < R; j++)
        {
            arr[i][j] = temp[i][j];
        }
    }

    // Print After Rotate
    printf("After Rotating \n");

    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < R; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}