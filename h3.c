#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,sum1,diff1;
    float c,d,sum2,diff2;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%f",&c);   
    scanf("%f",&d);
    
    sum1 = a+b;
    sum2 = c+d;
    diff1 = a-b;
    diff2 = c-d;
    
    printf("%d %d\n",sum1,diff1);
    
    printf("%.01f %.01f\n",sum2,diff2);
    
    return 0;
}
