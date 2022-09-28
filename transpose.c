#include<stdio.h>

int main()
{
    int a[10][10], transpose [10][10], r, c;
    printf("Enters rows and columns : ");
    scanf("%d %d", &r,&c);

    printf("Enter the matrix elements:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter element a[%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            transpose[i][j] = a[j][i];
        }
    }
    printf("\nTranspose of a Matrix:\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
          printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
