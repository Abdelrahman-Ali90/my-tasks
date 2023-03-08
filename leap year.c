#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;

    printf("\t\t\tEnter the year:\n ");
    scanf("%d",&y);

    (y % 4 ==0)? printf("\n%d is a leap year.\n", y):printf("\n%d is an ordinary year.\n", y);
    return 0;
}
