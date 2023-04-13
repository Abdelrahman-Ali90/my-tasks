#include <stdio.h>
#include <stdlib.h>

int main()
{
   int result;
   double x,y;

   printf("\t\t\tWelcome to simple calculator\n");

   printf("inter two numbers\n");
   scanf("%lf %lf",&x,&y);

   printf("choose the number from 1 to 4 to for the following operations:\n");

   printf(" 1: for adding \t 2:for subtract \t 3:for multiplying \t 4:for dividing\n");

   scanf("%d",&result);

   switch(result){
   case 1:
       printf("the result of adding %0.4lf to %0.4lf is:%0.4lf",x,y,x+y);
       break;
   case 2:
       printf("the result of Subtract %0.4lf to %0.4lf is:%0.4lf",x,y,x-y);
       break;
   case 3:
       printf("the result of multiplying %0.4lf to %0.4lf is:%0.4lf:", x, y, x * y);
       break;
   case 4:
        printf("the result of division of %0.4lf on %0.4lf is:%0.4lf",x,y,x/y);
        break;

   }
    return 0;
}
