#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,n,value,low,mid, high;

  printf("\t\t\tenter the size of the array\n");
  scanf("%d",&n);
  int arr[n];

  printf("enter the elements of the array:\n");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  printf("enter the value of the element to search for\n");
  scanf("%d",&value);

  low =0;
  high =n-1;
  mid = (low+high)/2;

  while (low<=high){
    if(arr[mid]<value)
        low=mid+1;
    else if(arr[mid]==value){
        printf("the element of value %d is at location:%d",value,mid);
        break ;
    }
    else
        high = mid - 1;
        mid = (low + high)/2;

  }
    if(low > high){
   printf("Not found! %d ", value);

 }
    return 0;
}

