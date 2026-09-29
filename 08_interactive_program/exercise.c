// exercise_4_18.c
// Chapter 4, Exercise 4.18: Bar-Chart Printing Program

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 0;

    printf("Bar-Chart Printing Program\n");
    printf("Enter five numbers (each between 1 and 30):\n\n");


    for (int i = 1; i <= 5; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &n);

        if (n >= 1 && n <= 30) {
            printf("Bar %d: ", i);


            for (int j = 1; j <= n; j++) {
                printf("*");
            }
            printf("\n"); // Move to the next line after printing the bar
        }
        else {
            printf("Invalid! Please enter a number between 1 and 30.\n");
            i--; // Repeat this turn if the input was invalid
        }
    }

    return 0;
}
