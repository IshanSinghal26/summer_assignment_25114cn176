#include<stdio.h>
int main()
{
    int c=0,i,n;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    printf("number of digits=%d",c);
    return 0;
}