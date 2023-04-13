#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number;
   int i;

   printf("\t\t\tinter the number\n");
   scanf("%d",&number);

   printf("the multiplication table of %d is :\n",number);
   for(i=0;i<=12;i++){
      printf("%d X %d : %d\n", i,number, number * i);
   }
    return 0;
}
