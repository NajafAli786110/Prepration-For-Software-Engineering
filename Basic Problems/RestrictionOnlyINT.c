#include <stdio.h>
#include <stdbool.h> // Include the header for bool type

int main() {
    int Num = 0;
    bool validInput = false; // Flag to track if the input is valid

    while (!validInput) {
        printf("Enter a Num: ");
        if (scanf("%d", &Num) == 1) { // Check if scanf successfully reads an integer
            validInput = true; // Set validInput to true if input is valid
        } else {
            // Clear input buffer in case of invalid input
            while (getchar() != '\n');
            printf("Invalid input. Please enter a valid integer.\n");
        }
    }

    // Now Num contains the valid input
    printf("You entered: %d\n", Num);

    return 0;
}
