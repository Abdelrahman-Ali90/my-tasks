#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i ;
   int max =0;


   printf("\t\t\t enter the size of the array:\n");
   scanf("%d",&n);

   int arr[n];

    printf ("enter the element of the array:\n");
   for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++){
    if(max<arr[i]){
      max =arr[i];
    }
   }
   printf("the biggest number in the array is:%d",max);

    return 0;
}
