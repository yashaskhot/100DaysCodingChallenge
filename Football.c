#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,x,y;
	
	scanf("%d",&t);
	
	for(i = 0; i < t; i++){
	    
	    scanf("%d %d",&x,&y);
	    
	    if (x >= 1 && y >= 1 ){
	        
	        if(x == y){
	            
	            printf("\nYES");
	        }
	    }
	    else{
	        printf("\nNO");
	    }
	    
	}
	return 0;
}

