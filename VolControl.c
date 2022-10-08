#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,x,y,a,b;
	
	scanf("%d",&t);
	
	for(i = 0; i < t; i++){
	    
	    scanf("%d %d",&x,&y);
	    
	    a = x-y;
	    b = y-x;
	    
	    if(x > y){
	        
	        printf("\n%d",a);
	    }
	    else{
	        
	        printf("\n%d",b);
	    }
	    
	}
	return 0;
}

