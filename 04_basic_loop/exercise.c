// exercise 4.7 (a)
//for statements that print the following sequences of values:
//a) 1, 3, 5, 7, 9, 11, 13

#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i=1;i<=13;i+=2){

        printf("%d\n",i);
    }
    return 0;
}
