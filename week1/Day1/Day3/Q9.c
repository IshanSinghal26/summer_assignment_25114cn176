#include<stdio.h>
int main()
{
    int n,c=0,i;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }

    }
    if(c==2)
    {
        printf("it is a prime no.");
    }
    else
    {
        printf("it is not a prime no.");
    }
    return 0;
}