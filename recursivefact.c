#include <stdio.h>

int fact(int n)
    {
        if (n<=1)
        return 1;
        else
        return n*fact(n-1);
    }
int main()
{
    int n,result;
    printf("Enter n:");
    scanf("%d",&n);
    result=fact(n);
    printf("Factorial=%d",result);
}
