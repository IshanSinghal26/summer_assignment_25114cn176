#include<stdio.h>
int factorial(int m);
int main()
{
    int n,fact;
    printf("enter number:");
    scanf("%d",&n);
    fact=factorial(n);
    printf("factorial is=%d",fact);
    return 0;
}
int factorial(int m)
{
    int i=1,f=1;
    while(i<=m)
    {
        f=f*i;
        i++;
    }
    return f;
}