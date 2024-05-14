#include <stdio.h>
#define row 4
#define col 4

int main()
{
    int arr[5][col] = {{1, 2, 3, 4},
                       {5, 6, 7, 8},
                       {9, 10, 11, 12},
                       {13, 14, 15, 16}};

    int *arr2[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr2[i][j] = &arr[i][j];
        }
    }

    printf("Your Values are\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", *arr2[i][j]);
        }
        printf("\n");
    }
}