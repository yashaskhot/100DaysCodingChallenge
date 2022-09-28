#include<stdio.h>
#include<math.h>
int main()

{
    char op;
    double a,b;

    printf("enter operand(+,-,*,/) : ");
    scanf("%c",&op);

    printf("Enter two numbers(format a,b) : ");
    scanf("%lf,%lf" ,&a,&b);



    switch(op)
    {
        case'+':
        printf("%lf + %lf=%lf",a,b ,a + b);
        break;

        case'-':
        printf("%lf - %lf=%lf",a,b ,a - b);
        break;

        case'*':
        printf("%lf * %lf=%lf",a,b ,a * b);
        break;

        case'/':
        printf("%lf / %lf=%lf",a,b ,a / b);
        break;

        default: printf("Please enter a correct operator");
    }
    return 0;
}
