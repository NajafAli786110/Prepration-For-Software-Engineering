#include <stdio.h>
#define pi 3.14f

int main()
{
    // Taking input from user
    int radius = 0;
    printf("Enter a Radius: ");
    scanf("%d", &radius);

    // Method to solve this problem
    float totalRadius = radius * radius;
    float AreaOfCircle =  pi * totalRadius;

    // Printing answer OR Final step
    printf("Your Area of Circle is: %f", AreaOfCircle);
    return 0;
}