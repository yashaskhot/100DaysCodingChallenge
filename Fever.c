#include <stdio.h>

int main(void) {
	
	int t,i,f;
	
	scanf("%d",&t);
	
	for(i = 0;i < t;i++){
	    
	    scanf("%d",&f);
	    
	    if(f > 98){
	        
	        printf("\nYES");
	    }
	    else{
	        
	        printf("\nNO");
	    }
	    
	}
	return 0;
}

