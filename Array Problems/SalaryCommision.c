// This code calculates the deduction in salary for each person and then identifies the persons who are in loss based on their deducted salaries. It then prints the names of the persons in loss.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int SalSize = 5;
    int k = 0;
    char *personNames[] = {"Najaf", "Ameen", "Asad", "Gulabo", "Khan"};
    int salaries[5] = {10000, 11000, 11100, 15000, 10500};
    int *deductSalary = malloc(SalSize * sizeof(int));
    int *result = malloc(SalSize * sizeof(int));


    // Calculate Salary Deduction
    for (int i = 0; i < SalSize; i++)
    {
        if (salaries[i] <= 10000)
        {
            int tax = salaries[i] * 0.1;
            deductSalary[i] = salaries[i] - tax;
        }
        else if (salaries[i] > 10000)
        {
            int tax = salaries[i] * 0.2;
            deductSalary[i] = salaries[i] - tax;
        }
    }


    // Checking which person is in Lose
    for (int i = 1; i < SalSize; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (deductSalary[i] < deductSalary[j])
            {
                result[k++] = i;
                break;
            }
        }
    }
    

    //Printing Final Result
    printf("Persons in loss:\n");
    for (int i = 0; i < k; i++)
    {
        printf("%s ", personNames[result[i]]);
    }

    free(deductSalary);
    free(result);
    return 0;
}