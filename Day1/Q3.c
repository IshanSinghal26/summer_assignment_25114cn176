#include<stdio.h>
int main()
{
    int i,f=1,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("factorial of number:%d",f);
    return 0;
}