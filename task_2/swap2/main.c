#include<stdio.h>
#include<stdlib.h>

void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf(" a = %d and b = %d\n", x, y);
}
int main(){
    int a, b;
    printf("\t\t\tenter two integers:\n ");
    scanf("%d%d", &a, &b);
    printf("before swapping, a = %d and b = %d\n", a, b);
    swap(a, b);
    printf("after swapping, a = %d and b = %d\n", a, b);
    return 0;
}
