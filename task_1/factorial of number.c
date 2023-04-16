#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int factorial=1; // to avoid garbage value and it cant be=0
    int i;

    printf("\t\t\tinter the number\n");
    scanf("%d",&number);

    for(i=1;i<=number;i++){
       factorial*= i;

    }
    printf("the factorial of:%d is:%d",number,factorial);

    return 0;
}
