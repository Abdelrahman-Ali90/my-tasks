#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,temp;

    printf("\t\t\tenter the size of the array:\n ");
    scanf("%d", &n);

    int arr[n];

    printf("enter the elements of the array:\n ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    printf("sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    return 0;
}
