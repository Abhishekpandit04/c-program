#include <stdio.h>

int main()
{
    int n,a[10],i;
    printf("Enter the array size\n");
    scanf("%d",&n);
    printf("Enter the element of the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("entered element");
    for(i=0;i<n;i++)
     printf("%d",a[i]);
    
    return 0;
}
