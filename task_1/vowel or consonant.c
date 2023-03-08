#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("\t\t\tenter a character:\n");
    scanf("%c",&a);

    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    {
        printf("the character is vowel");
    }
    else if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
    {
        printf("the character is vowel");
    }
    else
    {
        printf("the character is consonant");
    }

    return 0;
}
