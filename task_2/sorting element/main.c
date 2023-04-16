#include <stdlib.h>
#include <stdio.h>

int main() {
    int n, i;
    printf("\t\t\tenter the size of the array:\n ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of the array:\n ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("array in descending order: ");
    for (i = n-1; i >=0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}
