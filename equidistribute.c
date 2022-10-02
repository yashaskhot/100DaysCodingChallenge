#include <stdio.h>

int main(void) {
	int t,i,a,b,c;
	
	scanf("%d",&t);
	for(i = 0; i < t; i++){
	    
	    scanf("%d %d",&a,&b);
	    c = a+b;
	    if( c%2 == 0){
	        
	        printf("\nYES");
	    }
	    else{
	        
	        printf("\nNO");
	    }
	    
	}
	return 0;
}

