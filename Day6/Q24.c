#include<stdio.h>
int main()
{
    int n,x,a=1,b;
    printf("enter a number:");
    scanf("%d",&n);
    printf("enter the exponent:");
    scanf("%d",&x);
    
    b=x;
    while(b!=0)
    {
        a=a*n;
        b--;
    }
    printf("%d raised to %d=%d",n,x,a);
    return 0;
}