#include <stdio.h>
#include <stdlib.h>


int RemoveDublicates(int *nums, int numsSize)
{
    int *temp=malloc(numsSize * sizeof(int));
    temp[0]=nums[0];
    int val=1;
    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] != nums[i-1])
        {
            temp[val]=nums[i];
            val++;
        }
    }
    for (int i = 0; i < numsSize; i++)
    {
        nums[i] = temp[i];
    }

    free(temp);
    return val;
}

int main()
{
    int nums[] = {0,0,1,1,1,2,2,3,3,4};
    int numsSize = 10;

    int k = RemoveDublicates(nums, numsSize);

    printf("Array Number is: ");
    for (int i = 0; i < numsSize; i++)
    {
        printf(" %d ", nums[i]);
    }
    printf("\n");
    
    printf("Value of K is %d", k);

    return 0;
}