#include <stdio.h>

int main(void) {
	int t,i;
	int a,b,c;
	
	scanf("%d",&t);
	
	for(i =0;i < t;i++){
	    
	    scanf("%d %d %d",&a,&b,&c);
	    
	    if((a > b && a > c)){
	        
	        printf("\nAlice");
	    }
	    
	    if((b > a && b > c)){
	        
	        printf("\nBob");
	    }
	    
	    if((c > a && c > b)){
	        
	        printf("\nCharlie");
	    }
	    
	}
	
}

