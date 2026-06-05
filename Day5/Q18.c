#include<stdio.h>
int main()
{
    int r,i,n,n1,s=0;
    printf("enter a number:");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {  
        int f=1;
        r=n%10;
        for(i=1;i<=r;i++)
        {
        f=f*i;
        }
        s=s+f;
        n=n/10;
    }
    if(s==n1)
    {
        printf("it is a strong number.");
    }
    else
    {
        printf("it is not a strong number.");

    }
    return 0;
}
