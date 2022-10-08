#include <stdio.h>

int main(void) {
	// your code goes here
	int x,y,t;
	scanf("%d",&t);
	for(int i=0; i<t; i++)
	{
	    scanf("%d",&x);
	    scanf("%d",&y);
	    if(y<x)
	    printf("no\n");
	    else if(y<=x+200)
	    printf("yes\n");
	    else if(y>x+200)
	    printf("no\n");
	}
	return 0;
}

