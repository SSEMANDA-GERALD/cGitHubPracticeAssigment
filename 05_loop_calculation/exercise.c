// exercise_loop_calculation.c
// Calculates the sum, sum of squares, and sum of cubes from 1 to n.


#include <stdio.h>
#include <stdlib.h>

int main( ) {
    int n = 0;
    int sum = 0;
    int sum_squares = 0;
    int sum_cubes = 0;

    // Prompt user for the upper limit
    printf("%s", "Enter an upper limit (natural number): ");
    scanf("%d", &n);

    // Loop through natural numbers from 1 to n entered by user
    for (int i = 1; i <= n; i++) {
        sum += i;                  // Accumulate  sum
        sum_squares += (i * i);    // Accumulate sum of squares
        sum_cubes += (i * i * i);  // Accumulate sum of cubes
    }


    printf("\nResults for natural numbers from 1 to %d:\n", n);
    printf("Sum: %d\n", sum);
    printf("Sum of Squares: %d\n", sum_squares);
    printf("Sum of Cubes: %d\n", sum_cubes);

    return 0;
}
