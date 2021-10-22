#include <stdio.h>

int main()
{
    int n,a[10][10],i,j,p,q;
    printf("Enter no of row in array\n");
    scanf("%d",&p);
    printf("Enter no of colum in array\n");
    scanf("%d",&q);
    for(i=0;i<p;i++)
    {
    for(j=0;j<q;j++)
    scanf("%d",&a[i][j]);
    }
    
    printf("entered element\n");
       for(i=0;i<p;i++)
    {
    for(j=0;j<q;j++)
    
    printf("%d\t",a[i][j]);
    printf("\n");
        
    }
