#include <stdio.h>

void CheckSum(int nums[], int returnSize[], int numsSize, int target)
{
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                returnSize[0] = i;
                returnSize[1] = j;
            }
        }
    }
}
int main()
{
    int arr[4] = {3, 1, 5, 4};
    int arrSize = 4;
    int temp[1];
    int sum = 9;

    CheckSum(arr, temp, arrSize, sum);
    printf("Your Answer is: [");
    for (int i = 0; i < 2; i++)
    {
        printf(" %d ",temp[i]);
    }
    printf("]");

    return 0;
}