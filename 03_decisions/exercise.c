// EXERCISE 2.22
//reads an integer and determines and displays whether it’s odd or even.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter the number you wish to Test: \n");
    scanf("%d",& num);

    if (num%2 == 0){
        printf("The number is even");
    }else {
        printf("The number is Odd");
    }
    return 0;
}
