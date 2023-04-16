#include <stdio.h>

int main() {
    int size,i,location,element;

    printf("\t\t\tEnter the size of the array:\n ");
    scanf("%d", &size);

    int arr[size+1]; // because there is new element

    printf("Enter the elements of the array:\n ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the location of the element:\n ");
    scanf("%d", &location);

    if (location < 0 || location > size) {
        printf("incorect location!\n");
        return 0;
    }

    printf("Enter the element to insert:\n ");
    scanf("%d", &element);

    for (i = size; i >= location; i--) {// Shift the  old elements  to make space for the new element
        arr[i+1] = arr[i];
    }


    arr[location] = element;

    printf("The new array is:\n ");
    for (i = 0; i < size+1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
