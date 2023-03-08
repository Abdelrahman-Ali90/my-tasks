#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number[3];
   int i;
   int max;

    printf("inter the three number\n");
   for(i=0;i<3;i++){
        scanf("%d",&number[i]);
    }

    max=number[0];
    for(i=0;i<3;i++){
      max = (max < number[i]) ? number[i] : max;
    }

    printf("the biggest number is %d",max);
    return 0;
}
