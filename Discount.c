#include <stdio.h>

int main(void) {
	int t,i,x,d,y,z;
	x = 100;
	
	scanf("%d",&t);
	
	for(i = 0;i < t; i++){
	    
	    scanf("%d",&d);
	    y = x * d/100;
	    z = x - y;
	    printf("\n%d",z);
	    
	    
	}
	return 0;
}

