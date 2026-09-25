// EXERCISE 2.16
//reads two integers from the user then displays their sum, product, difference, quotient and remainder.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int int1, int2,sum, difference, quotient, remainder;
    printf("Enter Integer 1: ");
    scanf("%d",&int1);

    printf("\nEnter Integer 2: ");
    scanf("%d",&int2);

    sum = int1+int2;
    difference = int2-int1;
    quotient = int2/int1;
    remainder = int2%int1;

    printf("\nThe sum of the two integers, %d and %d is %d", int1,int2,sum);
    printf("\nThe Quotient is: %d\nThe remainder is: %d",quotient, remainder);

    return 0;
}
