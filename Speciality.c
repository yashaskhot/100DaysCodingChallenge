#include <stdio.h>

int main(void) {
	int t,i,x,y,z;
	
	scanf("%d",&t);
	
	for(i = 0; i < t; i++){
	    
	    scanf("%d %d %d",&x,&y,&z);
	    
	    if((x > y && x > z)){
	        
	        printf("\nSetter");
	    }
	    
	    if((y > x && y > z)){
	        
	        printf("\nTester");
	    }
	    
	    if((z > x && z > y)){
	        
	        printf("\nEditorialist");
	    }
	    
	}
	return 0;
}

