#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the two number\n");
    scanf("%d%d",&a,&b);
    printf("variable before swaping\n");
    printf("a=%d,b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("variable after swaping\n");
    printf("a=%d,b=%d",a,b);
    
    return 0;
}

