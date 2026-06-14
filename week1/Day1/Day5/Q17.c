#include<stdio.h>
int main()
{
    int n,i,s=0,r;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    if(s==n)
    {
        printf("it is a perfect number");
    }
    else
    {
        printf("it is not a perfect number");
    }
    return 0;
}