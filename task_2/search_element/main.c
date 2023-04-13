#include <stdio.h>

int main() {
    int n, i, search;
    int location=-1;

    printf("\t\t\tenter the size of the array:\n ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search for:\n ");
    scanf("%d", &search);


   for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            location = i;
            break;
        }
    }

    if (location != -1) {
        printf("the element %d is at location %d\n",search, location);
    } else {
        printf("Element not exist in the array\n");
    }

    return 0;
}
