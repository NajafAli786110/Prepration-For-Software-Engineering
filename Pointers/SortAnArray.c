#include <stdio.h>

int main(void)
{
    int Arr[5] = {2,4,1,7,32};
    int *ptrArr[5];
    
    for (int i = 0; i < 5; i++)
    {
        ptrArr[i]=&Arr[i];
    }


    // //Take Numbers
    // printf("Put your numbers from 1 to 5: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &Arr[i]);
    // }
    // printf("\n");
    

    // Printing Before Sorting Values
    // printf("Your numbers is: \n");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", *ptrArr[i]);
    // }
    // printf("\n");


    // Sort an Array:
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (Arr[i]>Arr[j])
            {
                int temp = Arr[i];
                Arr[i]=Arr[j];
                Arr[j]=temp;
            }
            
        }
        
    }

    // Printing final Values
    printf("Your numbers is: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *ptrArr[i]);
    }

    return 0;
}