#include <stdio.h>

int main() {
    int size;
    int i;
    int j;
    int count;

    printf("\t\t\tEnter the size of the array:\n ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are:\n ");
    for (i = 0; i < size; i++) {
        printf("%d \n", arr[i]);
    }

    for (i = 0; i < size; i++) {
        count = 1; // no frequency =0
        for (j = i + 1; j < size; j++) { // to avoid repeating the element
            if (arr[j] == arr[i]) {
                count++;
                arr[j] = arr[size-1];
                size--; //to avoid counting the repeated element
                j--;

            }
        }
        printf("The frequency of %d is %d\n", arr[i], count);
    }

    return 0;
}



