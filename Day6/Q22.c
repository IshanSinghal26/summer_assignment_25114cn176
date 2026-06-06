#include<stdio.h>
int main()
{
    int n,r,res=0,c=1;
    printf("enter a binary number:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r==1)
        res=res+c;

        n=n/10;
        c=c*2;
    }
    printf("%d",res);
    return 0;
}