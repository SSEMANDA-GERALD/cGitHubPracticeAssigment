// loop with input
// Square of Asterisks with repeated user input

#include <stdio.h>
#include <stdlib.h>

int main( ) {
    int side = 0;

    printf("=== Square of Asterisks (Multiple Inputs) ===\n");
    printf("Enter the side size (1 to 20), or enter 0 to exit: ");
    scanf("%d", &side);

    while (side != 0) {
        // Validate the range specified in the exercise (1 to 20)
        if (side < 1 || side > 20) {
            printf("Invalid size! Please enter a number between 1 and 20.\n");
        } else {
            printf("\nSquare of side %d:\n", side);

            // Nested loops to print the square of asterisks
        for (int i = 0; i < side; i++) {
        for (int j = 0; j < side; j++) {
            printf("* ");
                }
            printf("\n");
            }
        }

        // Prompt for the next value during repetition
        printf("\nEnter another side size (1-20), or 0 to exit: ");
        scanf("%d", &side);
    }

    printf("\nProgram terminated successfully.\n");
    return 0;
}
