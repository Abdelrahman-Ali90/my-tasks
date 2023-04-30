#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i, j, temp, min_element;

    printf("\t\t\tenter the size of the array:\n ");
    scanf("%d", &n);

    int arr[n];

    printf("enter the elements of the array:\n ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n-1;i++){
        min_element=i; //assume first element is the smallest element
        for(j=i+1;j<n;j++){

            if(arr[j]<arr[min_element])
                min_element=j;
        }

        temp=arr[i];
        arr[i]=arr[min_element];
        arr[min_element]=temp;
    }
    printf("Sorted array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
