#include <stdio.h>

int main(void) {
	
	int t,i;
	int x;
	
	scanf("%d",&t);
	
	for(i = 0; i < t; i++){
	    
	    scanf("%d",&x);
	    
	    if(x > 30){
	        
	        printf("\nYES");
	    }
	    else{
	        
	        printf("\nNO");
	    }
	    
	    
	}
	
	return 0;
}

