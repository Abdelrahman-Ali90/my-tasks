#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main() {
    int n;
    printf("\t\t\tenter a number : ");
    scanf("%d", &n);
    int result = factorial(n);
    printf("the factorial of %d = %d\n", n, result);
    return 0;
}
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
