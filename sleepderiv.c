#include <stdio.h>

int main(void) {
	int i,t;
	int x;
	
	scanf("%d",&t);
	
	for(i =0; i<t;i++){
	    
	    scanf("%d",&x);
	    
	    if(x >= 7){
	        printf("\nNO");
	    } 
        else{
            printf("\nYES");
        }    
	    
	    
	}
	return 0;
}

