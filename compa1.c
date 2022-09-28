#include<stdio.h>

int main()
{

    int a[100],b[100],i,j,n;

    //accepting elements
    printf("Enter the number of elements to be entered in arr : ");
    scanf("%d",&n);

    //using loops to store elements

    for ( i = 0; i < n; ++i)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    
     for ( j = 0; j < n; ++j)
    {
        printf("Enter the element %d: ",j+1);
        scanf("%d",&b[j]);
    }

    if(a[i] == b[j]){

        printf("1");
    } else{
                        
        printf("0");
    }
    


}