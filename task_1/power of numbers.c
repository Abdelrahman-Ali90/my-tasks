#include <stdio.h>
#include <stdlib.h>

int main()
{

   double number;
    double power;
    double result=1; //when power=0 the result will be 1

    printf("inter a number");
    scanf("%lf",&number);

    printf("inter the exponent");
    scanf("%lf",&power);

     //when power=0 the condition Will not be achieved
    while(power>0){
        result*=number;
        power--;
    }
    printf("the result  is: %.3lf",result);

    return 0;
}
