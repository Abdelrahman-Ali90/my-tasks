#include <stdlib.h>
#include <stdio.h>


int main() {
    int arr[100], n, i, j, temp;

    printf("\t\t\tenter the size of the array:\n ");
    scanf("%d", &n);

    printf("\t\t\tenter the elements of the array:\n ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);


    // Sort in ascending order
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
    }
    }
    }

    printf("Array sorted in ascending order: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Sort in descending order
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
    }
    }
    }

    printf("Array sorted in descending order: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
