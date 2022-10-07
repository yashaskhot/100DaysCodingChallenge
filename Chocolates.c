#include <stdio.h>

int main(void) {
	// your code goes here
	int n,x,y,z;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	    scanf("%d%d%d",&x,&y,&z);
	    printf("%d\n",((x*5)+(y*10))/z);
	}
	return 0;
}

