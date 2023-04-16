#include <stdio.h>


int main() {
    int i, j, size;
    int sum = 0;

    printf("\t\t\tenter the size of the  matrix:\n ");
    scanf("%d", &size);
    int matrix[size][size];


    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    for (i = 0; i < size; i++) {
        sum += matrix[i][i];
    }


    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}
