#include <stdio.h>
#include <conio.h>

void main()
{
    int i, a ,f = 1;

    printf("Enter a number : ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
        f = f * i ;

    printf("Factorial of %d is %d\n", a, f);
    return 0;
}
