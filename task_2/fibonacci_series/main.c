#include <stdio.h>
#include <stdlib.h>

int fibo(int number);

int main()
{
    int number,result;


    printf("\t\t\tenter the nth number in fibonacci series: ");
    scanf("%d", &number);
    if (number < 0)
    {
        printf("there is no in fibonacci  series negative number\n");
    }
    else
    {
        result = fibonacci(number);
        printf("The %d number in fibonacci series is %d\n", number, result);
    }
    return 0;
}
int fibonacci(int number)
{
    if (number == 0)
    {
        return 0;
    }
    else if (number == 1)
    {
        return 1;
    }
    else
    {
        return(fibonacci(number - 1) + fibonacci(number - 2));
    }
}
