#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b;

  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  printf("Before swapping: a = %d, b = %d\n", a, b);

  a = a + b;  // store new value of a= sum of two numbers
  b = a - b;  // subtract b from sum of two numbers
  a = a - b;  // subtract new value of b from the sum of two numbers

  printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
