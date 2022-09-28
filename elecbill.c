#include<stdio.h>
int main()

{
    float amt,total_amount,surcharge,unit;
    printf("enter units consumed = ");
    scanf("%f", &unit);
    if(unit<=50)
    {
     amt = 0.50*unit;
    }
    else if(unit<=100)
    {
     amt = 0.75*unit;
    }
    else if(unit<=250)
    {
     amt = 1.20*unit;
    }
    else if(unit>251)
    {
     amt = 1.50*unit;
    }
     surcharge=amt*20;
     total_amount=amt+surcharge;

    printf("Total electricity bill is = %.2f",total_amount);

    return 0;



}
