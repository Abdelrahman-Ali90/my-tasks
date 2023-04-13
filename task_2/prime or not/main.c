#include <stdio.h>
#include <stdlib.h>


int is_prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("\t\t\tenter a number:\n ");
    scanf("%d", &n);

    if (is_prime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}
