#include<stdio.h>
int main()
{
    int p=1,r,n;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        p=p*r;
        n=n/10;
    }
    printf("product of digits of number=%d",p);
    return 0;
}