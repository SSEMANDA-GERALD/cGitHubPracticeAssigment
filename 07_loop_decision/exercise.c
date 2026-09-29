// exercise_3_23.c
// Chapter 3, Exercise 3.23: Find the Largest Number (Loop with Decision)
// 10 non-negative numbers and determines and prints the largest of the numbers.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int counter = 0;   // Counter to track numbers entered
    int number = 0;    // Current number entered by user
    int largest = 0;   // Variable to store the largest value found

    // Prompt for the first number to initialize 'largest'
    printf("Enter number 1: ");
    scanf("%d", &number);
    largest = number; // Assume the first number is the largest initially
    counter = 1;

    // Loop to collect the remaining 9 numbers
    while (counter < 10) {
        printf("Enter number %d: ", counter + 1);
        scanf("%d", &number);

        // Decision: Check if the new number is greater than the current largest
        if (number > largest) {
            largest = number; // Update largest if a bigger number is found
        }

        counter = counter + 1; // Increment counter
    }

    // Display the final result
    printf("\n========================================\n");
    printf("The largest number entered is: %d\n", largest);
    printf("========================================\n");

    return 0;
}
