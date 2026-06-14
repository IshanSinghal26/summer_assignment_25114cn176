#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("sum of n numbers=%d",s);
    return 0;
}
