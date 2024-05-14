#include <stdio.h>
#include <stdlib.h>
#define arr1Length 4
#define arr2Length 5

void mergeSort(int *arrFunc, int FL, int arr1[], int arr2[])
{
    for (int i = 0; i < arr1Length; i++)
    {
        *(arrFunc+i) = arr1[i];
    }
    for (int i = 0; i < arr2Length; i++)
    {
        *(arrFunc + arr1Length + i)= arr2[i];
    }
};

int main()
{
    int FinalArrLength = arr1Length + arr2Length; int *ptrArr;
    int arr1[arr1Length]={1,2,3,4};
    int arr2[arr2Length]={5,6,7,8,9};

    ptrArr=malloc(FinalArrLength * (sizeof(int)));

    mergeSort(ptrArr, FinalArrLength, arr1, arr2);
    printf("\n");

    printf("Here's your values are: \n");
    for (int i = 0; i < FinalArrLength; i++)
    {
        printf("%d ", *(ptrArr + i));
    }

    free(ptrArr);
    
    return 0;
}